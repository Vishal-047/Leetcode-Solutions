class Solution {
public:
    bool helper(int k, const vector<int>& piles, int h) {
        long long hours = 0;
        for (int pile : piles) {
            hours += (pile + k - 1) / k;
        }
        return hours <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int lo = 1, hi = *max_element(piles.begin(), piles.end());

        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;
            if (helper(mid, piles, h))
                hi = mid;
            else
                lo = mid + 1;
        }
        return lo;
    }
};
