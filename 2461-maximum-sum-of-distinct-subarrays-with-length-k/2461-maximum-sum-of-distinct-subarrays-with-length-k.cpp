class Solution {
public:
    long long maximumSubarraySum(vector<int>& arr, int k) {
        map<int,int>freq;
        int n=arr.size();
        long long ans=0;
        long long curr=0;
        int dist=0;
        for(int r=0;r<n;r++){
            curr+=arr[r];
            freq[arr[r]]++;
            if(freq[arr[r]]==1) dist++;
            if(r>=k){
                int l=r-k;
                curr-=arr[l];
                freq[arr[l]]--;
                if(freq[arr[l]]==0) dist--;
            }
            if(r>=k-1 && dist==k){
                ans=max(ans,curr);
            }
        }
        return ans;
    }
};