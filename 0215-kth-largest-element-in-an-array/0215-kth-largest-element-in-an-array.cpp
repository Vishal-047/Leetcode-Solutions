class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> pq;
        for(auto x: nums){
            if(pq.size()==k){
                if(x>=pq.top())
                    {
                        pq.pop();
                        pq.push(x);
                    }
                    continue;
            }
            pq.push(x);
            // if(pq.size()>k) pq.pop();
        }
        return pq.top();
    }
};