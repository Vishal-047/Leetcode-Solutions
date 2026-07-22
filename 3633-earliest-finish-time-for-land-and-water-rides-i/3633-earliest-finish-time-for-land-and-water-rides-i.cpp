
class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        const int n = std::ssize(landStartTime);
        const int m = std::ssize(waterStartTime);

        int best_land_finish = std::numeric_limits<int>::max();
        for(int i{}; i < n; ++i){
            best_land_finish = std::min(best_land_finish, landStartTime[i] + landDuration[i]);
        }
        
        int best_water_finish = std::numeric_limits<int>::max();
        int best = std::numeric_limits<int>::max();
        for(int j{}; j < m; ++j){
            best_water_finish = std::min(best_water_finish, waterStartTime[j] + waterDuration[j]);
            if(waterStartTime[j] > best_land_finish){
                best = std::min(best, waterStartTime[j] + waterDuration[j]);
            } else{
                best = std::min(best, best_land_finish + waterDuration[j]);
            }
        }
        
        for(int i{}; i < n; ++i){
            if(landStartTime[i] > best_water_finish){
                best = std::min(best, landStartTime[i] + landDuration[i]);
            } else{
                best = std::min(best, best_water_finish + landDuration[i]);
            }
        }
        
        return best;
    }
};