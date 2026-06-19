class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int altitude=0, max_alt=0;
        for(int g:gain){
            altitude+=g;
            max_alt=max(altitude, max_alt);
        }
        return max_alt;
    }
};