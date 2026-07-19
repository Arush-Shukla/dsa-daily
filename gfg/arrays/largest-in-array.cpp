// GfG - Largest in Array
// Link: https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1
// Difficulty: Basic
// Approach: Linear scan, track max, O(n) time, O(1) space

class Solution {
  public:
    int largest(vector<int> &arr) {
        int maxx=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>maxx){
                maxx=arr[i];
            }
        }
        return maxx;
    }
};