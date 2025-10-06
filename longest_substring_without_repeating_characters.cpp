#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> freq;
        int j=0;
        int maxLen = 0;
        for(int i=0; i<s.size(); i++) {
            freq[s[i]]++;

            while(freq[s[i]]>1) {
                freq[s[j]]--;
                j++;
            }

            maxLen = max(maxLen, i-j+1);
        }

        return maxLen;
    }
};