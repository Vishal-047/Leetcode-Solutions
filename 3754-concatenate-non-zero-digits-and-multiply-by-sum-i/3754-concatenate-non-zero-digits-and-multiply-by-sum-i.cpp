class Solution {
public:
    long long sumAndMultiply(int n) {
        string s=to_string(n);
        string ans="";
        long long sum=0;
        for(char ch:s){
            if(ch!='0'){
                ans+=ch;
                sum+=ch-'0';
            }
        }
        if(ans.empty()) return 0;
        long long num=stoll(ans);
        long long res=sum*num;
        return res;
    }
};