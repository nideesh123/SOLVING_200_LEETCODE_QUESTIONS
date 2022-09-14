class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 1;
        for (int i : nums)
            ans ^= i;
        return ans;
    }
};
