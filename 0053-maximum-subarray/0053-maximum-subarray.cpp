class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int currSum=0, maxSum=*min_element(nums.begin(), nums.end());
        for(int num:nums){
            currSum+=num;
            maxSum=max(currSum, maxSum);
            if(currSum<0) currSum=0;
        }
        return maxSum;
    }
};