// GfG - Second Largest
// Link: https://www.geeksforgeeks.org/problems/second-largest3735/1
// Difficulty: Easy
// Approach: Single pass, track max and second max, O(n) time, O(1) space

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int max=-1;
        int smax=-1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>max){
                smax=max;
                max=arr[i];
            }
            else if(arr[i]>smax && arr[i]!=max){
                smax=arr[i];
            }
        }
        return smax;
    }
};