// LeetCode 344 - Reverse String
// Link: https://leetcode.com/problems/reverse-string/
// Difficulty: Easy
// Approach: Two pointers (left, right), swap in place, O(n) time, O(1) space

class Solution {
  public:
    void reverseString(vector<char>& s) {
        int left=0;
        int right=s.size()-1;
        while(left<right){
            char ss;
            ss=s[right];
            s[right]=s[left];
            s[left]=ss;
            left++;
            right--;
        }
    }
};