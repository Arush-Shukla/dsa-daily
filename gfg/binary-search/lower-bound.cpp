// GfG - Lower Bound
// Link: https://www.geeksforgeeks.org/problems/implement-lower-bound/1
// Difficulty: Easy
// Approach: Binary search, find first index with arr[i] >= target, O(log n) time, O(1) space

class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        int maxi=arr.size();;
        int left=0;
        int right=arr.size()-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(arr[mid]>=target){
                maxi=mid;
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return maxi;
    }
};