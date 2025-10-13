#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0, maxSum = INT_MIN;
        for(int i=0; i<nums.size(); i++) {
            sum += nums[i];
            maxSum = max(maxSum, sum);

            if(sum < 0) sum = 0;
        }
        // TC = O(n^2)
        // SC = O(1)
        return maxSum;
    }
};