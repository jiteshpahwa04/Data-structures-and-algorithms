#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp; // element -> index
        vector<int> ans(2, -1);
        for(int i=0; i<nums.size(); i++) {
            int curr = nums[i];
            int diff = target - curr;

            if(mp.find(diff)!=mp.end()) {
                ans[0] = i;
                ans[1] = mp[diff];
                break;
            }

            mp[curr] = i;
        }
        return ans;
    }
};