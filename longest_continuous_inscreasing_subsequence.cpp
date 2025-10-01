#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int longest = 1;
        int len = 1;
        for(int i=1; i<nums.size(); i++) {
            int currEl = nums[i];
            int prevEl = nums[i-1];

            if(currEl > prevEl) {
                len++;
            } else {
                len = 1;
            }

            longest = max(longest, len);
        }

        return longest;
    }
};