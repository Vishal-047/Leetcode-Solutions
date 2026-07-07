class Solution {
public:
    bool isVowel(char c){
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
    }
    int maxVowels(string s, int k) {
        int left=0, maxvowel=0, vowel=0;
        for(int right=0; right<s.size(); right++){
            if(isVowel(s[right])) vowel++;

            if((right-left+1)==k){
                maxvowel=max(maxvowel, vowel);
                if(isVowel(s[left])) vowel--;
                left++;
            }
        }
        return maxvowel;
    }
};