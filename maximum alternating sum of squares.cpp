#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        
        vector<long long>alt;
        for(int i:nums)
            alt.push_back(1LL*i*i);
        sort(alt.begin(),alt.end());
        int q=alt.size();
        long long point=0;
        for(int j=0;j<q;++j){
            if(j<q/2) point-=alt[j];
            else point+=alt[j];
        }
        return point;
    }
};