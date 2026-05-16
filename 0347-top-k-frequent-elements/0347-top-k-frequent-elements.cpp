class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>freq;
        for(int num:nums){
            freq[num]++;
        }
        vector<vector<int>>bucket(nums.size()+1); //mutiple no. can have same frequency....
        for(auto it:freq){
            bucket[it.second].push_back(it.first);
        }
        //we are storing the number in bucket such that the index is freq, and coressponding to that is the number/element...., so the number with highest freq will be automatically appear in last....
        vector<int>ans;
        for(int i=bucket.size()-1; i>=0 && ans.size()<k;i--){
            for(int num:bucket[i]){
                ans.push_back(num);
            }
            if(ans.size()==k) break;
        }
        return ans;
    }
};