class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maximum=nums[0];
        int current=nums[0];
        for(int i=1;i<nums.size();i++){
            maximum=max(nums[i],maximum+nums[i]);
            current=max(maximum,current);
        }
        return current;
    }
};