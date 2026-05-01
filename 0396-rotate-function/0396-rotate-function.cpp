class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int sum=0, val=0, n=nums.size();
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            val+=i*nums[i];
        }
        int maxval=val;
        for(int i=1;i<nums.size();i++){
            val+=sum-n*nums[n-i];
            maxval=max(maxval,val);
        }
        return maxval;
    }
};