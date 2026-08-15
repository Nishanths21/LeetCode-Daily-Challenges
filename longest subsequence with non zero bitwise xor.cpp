#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        vector<int>p=nums;
        int q=0;
        bool r=false;
        for(int i:p){
            q^=i;
            if(i!=0) r=true;
        }
        if(q!=0){
            return p.size();
        }else{
            return r ?(int) p.size()-1:0;
        }
    }
};