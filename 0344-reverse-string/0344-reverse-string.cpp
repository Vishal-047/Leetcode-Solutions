class Solution {
public:
    void reverseString(vector<char>& s) {
        // int sze = s.size();
        // for (int i = 0; i < sze / 2; i++) {
        //     int temp = s[i];
        //     s[i] = s[sze - i - 1];
        //     s[sze - i - 1] = temp;

        int i=0; int j=s.size()-1;
        while(i<=j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
    }
};