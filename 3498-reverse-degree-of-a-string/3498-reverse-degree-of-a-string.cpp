class Solution {
public:
    int reverseDegree(string s) {
        char arr[]={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x','y', 'z'};
        int sum=0;
        for(int j=0;j<s.size();j++){
            int n=1;
            for(int i=0;i<26;i++){
                if(s[j]==arr[i]){
                    n=(j+1)*(26-i);
                    sum+=n;
                    break;
                } 
            }
            n=1;
        }
        return sum;
    }
};