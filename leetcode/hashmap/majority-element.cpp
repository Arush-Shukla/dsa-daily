// LeetCode 169 - Majority Element
// Link: https://leetcode.com/problems/majority-element/
// Difficulty: Easy
// Approach: Hash map frequency count, O(n) time, O(n) space

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int req=n/2;
        unordered_map<int,int> freq;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        for(auto &[num,count]: freq){
            if(count>req){
                return num;
            }

        }
        return -1;
    }
};