// LeetCode 167 - Two Sum II - Input Array Is Sorted
// Link: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
// Difficulty: Medium
// Approach: Two pointers (left, right), O(n) time, O(1) space

class Solution {
  public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left=0;
        int right=numbers.size()-1;
        while (left<right){
            int curr_sum=numbers[left]+numbers[right];
            if (curr_sum == target){
                return {left+1,right+1};
            }
            else if (curr_sum < target){
                left+=1;
            }
            else{
                right-=1;
            }
        }
        return {};
    }
};