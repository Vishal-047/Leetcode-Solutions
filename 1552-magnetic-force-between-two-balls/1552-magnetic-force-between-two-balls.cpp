class Solution {
public:
    bool helper(vector<int>&pos, int m, int dist){
        int count=1;
        int last=pos[0];
        for(int i=1;i<pos.size();i++){
            if(pos[i]-last>=dist){
                count++;
                last=pos[i];
            }
        }
        return count>=m;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int start=1, end=position[position.size()-1]-position[0];
        int ans=1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(helper(position, m, mid)){
                ans=mid;
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return ans;
    }
};