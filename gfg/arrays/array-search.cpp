// GfG - Array Search
// Link: https://www.geeksforgeeks.org/problems/array-search/1
// Difficulty: Basic
// Approach: Linear search, O(n) time, O(1) space

class Solution {
  public:
    int search(vector<int>& arr, int x) {
        for(int i=0;i<arr.size();i++){
            if(arr[i]==x){
                return i;
            }
        }
        return -1;
    }
};