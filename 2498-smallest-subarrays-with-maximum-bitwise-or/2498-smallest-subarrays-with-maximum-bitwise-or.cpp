class Solution {
public:
    vector<int> smallestSubarrays(vector<int>& nums) {
        int n = nums.size();
        vector<int> last(30, 0), res(n, 1);
        for (int i = n - 1; i >= 0; --i) {
            for (int bit = 0; bit < 30; ++bit) {
                if ((nums[i] & (1 << bit)) > 0)
                    last[bit] = i;
                res[i] = max(res[i], last[bit] - i + 1);
            }
        }
        return res;
    }
};