// GfG - Check Sorted Array
// Link: https://www.geeksforgeeks.org/problems/check-if-array-is-sorted/1
// Difficulty: Easy
// Approach: Linear scan, compare adjacent elements, O(n) time, O(1) space

class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        int n=arr.size();
        for(int i=1;i<n;i++){
            if (arr[i]>=arr[i-1]){

            }
            else{
                return false;
            }
        }
        return true;
    }
};