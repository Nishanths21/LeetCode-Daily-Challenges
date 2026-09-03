#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        bool oddval=false;
        bool evenval=false;
        int mini=nums1[0];
        for(int i:nums1){
            if(i%2==0){
                evenval=true;
            }
            else{
                oddval=true;
            }
            if(i<mini){
                mini=i;
            }
        }
        if(!oddval || !evenval){
            return true;
        }
        return mini%2!=0;
    }
};