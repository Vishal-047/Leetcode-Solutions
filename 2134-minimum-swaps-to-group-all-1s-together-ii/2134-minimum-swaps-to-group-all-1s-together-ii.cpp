class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        int totalOnes=0, windowOnes=0, maxOnes=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1) totalOnes++;
        }
        //first Window
        for(int i=0;i<totalOnes;i++){
            if(nums[i]==1) windowOnes++;
        }
        maxOnes=windowOnes;
        // Slide the window
        for(int i=1;i<n;i++){
            windowOnes-=nums[i-1];
            windowOnes+=nums[(i+totalOnes-1)%n];
            maxOnes=max(maxOnes, windowOnes);
        }
        return totalOnes-maxOnes;
    }
};