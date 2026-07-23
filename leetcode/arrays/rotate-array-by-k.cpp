// LeetCode 189 - Rotate Array
// Link: https://leetcode.com/problems/rotate-array/
// Difficulty: Medium
// Approach: Reverse whole array, then reverse first k and remaining n-k parts, O(n) time, O(1) space

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k%=n;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};