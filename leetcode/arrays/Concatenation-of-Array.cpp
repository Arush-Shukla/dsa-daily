// LeetCode 1929 - Concatenation of Array
// Link: https://leetcode.com/problems/concatenation-of-array/
// Difficulty: Easy
// Approach: Append array to itself twice, O(n) time, O(n) space

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int>res;
        res.reserve(2*n);
        for(int i=0;i<n;i++){
            res.push_back(nums[i]);
        }
        for(int i=0;i<n;i++){
            res.push_back(nums[i]);
        }
        return res;
    }
};