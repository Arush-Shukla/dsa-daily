// GfG - Upper Bound
// Link: https://www.geeksforgeeks.org/problems/implement-upper-bound/1
// Difficulty: Easy
// Approach: Binary search, find first index with arr[i] > target, O(log n) time, O(1) space

class Solution {
  public:
    int upperBound(vector<int>& arr, int target) {
        int left=0;
        int right=arr.size()-1;
        int upper=arr.size();
        while(left<=right){
            int mid=left+(right-left)/2;
            if(arr[mid]>target){
                upper=mid;
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return upper;
    }
};