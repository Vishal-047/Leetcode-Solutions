class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans=0;
        for(auto& r:accounts){
            int sum=0;
            for(int c:r){
                sum+=c;
            }
            ans=max(sum, ans);
        }
        return ans;
    }
};