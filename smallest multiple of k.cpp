#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> p(nums.begin(), nums.end());
        int q=k;
        while (true) {
            if (p.find(q) == p.end())
                return q;
            q+=k;
        }
    }
};