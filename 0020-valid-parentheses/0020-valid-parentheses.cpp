class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        map<char,char>mp;
        mp['}']='{';
        mp[']']='[';
        mp[')']='(';
        for(auto x:s){
            if(mp[x]){
                if(st.empty()) return false;
                if(st.top()!=mp[x]) return false;
                st.pop();
                continue;
            }
            st.push(x);
        }
        return st.empty();
    }
};