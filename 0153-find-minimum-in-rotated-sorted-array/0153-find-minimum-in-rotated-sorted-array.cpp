class Solution {
public:
    int findMin(vector<int>& nums) {
    //     int mini=nums[0];
    //     for(int i=1;i<nums.size();i++){
    //         if(nums[i]<mini) mini=nums[i];
    //     }
    //     return mini;

    int l=0, r=nums.size()-1, mid=0;
        while(l<r){
            mid=(l+r)/2;
            if(nums[mid]>nums[r]){
                l=mid+1;
            }
            else{
                r=mid;
            }
        }
        return nums[l];
     }
};