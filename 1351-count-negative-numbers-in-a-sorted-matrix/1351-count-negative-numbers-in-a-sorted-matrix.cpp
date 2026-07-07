class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
        for(auto& r:grid){
            for(int c:r){
                if(c<0) count++;
            }
        }
        return count;
    }
};