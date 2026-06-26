class Solution {
public:
    int search(vector<int>& arr, int val) {
        int lo = 0, hi = arr.size();
        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;
            if (arr[mid] >= val) hi = mid;
            else lo = mid + 1;
        }
        return lo;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = search(nums, target);
        if (first == nums.size() || nums[first] != target) {
            return {-1, -1};
        }
        int last = search(nums, target + 1) - 1;
        return {first, last};
    }
};
