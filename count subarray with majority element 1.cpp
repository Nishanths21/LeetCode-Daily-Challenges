#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int p=nums.size();
        int cnt=0;
        for(int i=0;i<p;i++){
            int tar=0;
            for(int j=i;j<p;j++){
                if(nums[j]==target) tar++;
                int l=j-i+1;
                if(tar>l/2) cnt++;
            }
        }
        return cnt;
    }
};