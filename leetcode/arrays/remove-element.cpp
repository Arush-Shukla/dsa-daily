// LeetCode 27 - Remove Element
// Link: https://leetcode.com/problems/remove-element/
// Difficulty: Easy
// Approach: Two pointers, overwrite non-target values in place, O(n) time, O(1) space

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
    }
};