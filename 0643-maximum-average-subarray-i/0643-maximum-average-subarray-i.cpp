class Solution {
public:
    double findMaxAverage(vector<int>& arr, int k) {
        int curr=0;
        int ans=0;
        for(int i=0;i<k;i++){
            curr+=arr[i];
        }
        ans=curr;
        for(int i=k;i<arr.size();i++){
            curr-=arr[i-k];
            curr+=arr[i];
            ans=max(curr, ans);
        }
        return (double)ans/k;
    }
};