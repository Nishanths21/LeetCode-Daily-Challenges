#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int,vector<int>>pos;
        for(int i=0;i<nums.size();i++){
            pos[nums[i]].push_back(i);
        }
        int mini=INT_MAX;
        bool found=false;
        for(auto& [val,ind]:pos){
            if(ind.size()>=3){
                for(int i=0;i+2<ind.size();i++){
                    int d=2*(ind[i+2]-ind[i]);
                    mini=min(mini,d);
                    found=true;
                }
            }
        }
        return found ? mini : -1;
    }
};