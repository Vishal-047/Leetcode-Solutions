class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int>stk;
        if(s.empty()) return 0;
        int ans =0;
        for(int i=0;i<s.size();i++){
            if(!stk.empty()&&s[i]==')' && s[stk.top()]=='('){
                stk.pop();
                continue;
            } 
            stk.push(i);
        }
        int curr=s.size();
        while(!stk.empty()){
            int currlen=stk.top();
            stk.pop();
            ans=max(ans,curr-currlen-1);
            curr=currlen;
        }
        ans=max(curr,ans);
        return ans;
    }
};