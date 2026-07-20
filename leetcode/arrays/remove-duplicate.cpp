// LeetCode 26 - Remove Duplicates from Sorted Array
// Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
// Difficulty: Easy
// Approach: Two pointers (left, right), O(n) time, O(1) space

class Solution {
  public:
    int removeDuplicates(vector<int>& nums) {
        int left=0;
        int right=1;
        while(right<nums.size()){
            if(nums[left]==nums[right]){
                right++;
            }
            else{
                left++;
                nums[left]=nums[right];
                right++;
            }
        }
        return left+1;
    }
};