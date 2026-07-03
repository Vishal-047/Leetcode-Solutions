class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>arr(n,0);
        int count=0;
        arr[0]=nums[0];
        for(int i=1;i<n;i++){
            arr[i]=nums[i]+arr[i-1];
        }
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            if(arr[i]==k) count++;
            int val=arr[i]-k;
            if(mp.find(val)!=mp.end()){
                count+=mp[val];
            }
            if(mp.find(arr[i])==mp.end()){
                mp[arr[i]]=0;
            }
            mp[arr[i]]++;
        }
        return count;
    }
};