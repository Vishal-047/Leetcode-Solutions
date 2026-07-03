class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;
        int start=0, prod=1, count =0;
        for(int end=0; end<nums.size(); end++){
            prod*=nums[end];
            while(start<=end && prod>=k){
                prod/=nums[start];
                start++;
            }
            count+=(end-start+1);
        }
        return count;
    }
};