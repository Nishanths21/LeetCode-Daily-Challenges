#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        auto p=nums;
        int q=nums.size();
        long long maxi=*max_element(p.begin(),p.end());
        long long mini=*min_element(p.begin(),p.end());
        return (maxi-mini)*1LL*k;
    }
};