class Solution {
public:
    int firstPos(vector<int>&nums, int target){
        int ans=-1;
        int left=0, right=nums.size()-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]==target){
                ans=mid;
                right=mid-1;
            }
            else if(nums[mid]<target) left=mid+1;
            else right=mid-1; 
        }
        return ans;
    }
    int lastPos(vector<int>&nums, int target){
        int ans=-1;
        int left=0, right=nums.size()-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]==target){
                ans=mid;
                left=mid+1;
            }
            else if(nums[mid]<target) left=mid+1;
            else right=mid-1; 
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=firstPos(nums, target);
        int last=lastPos(nums, target);
        return {first, last};
    }
};