#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int p=nums.size();
        int maxi=0;
        for(int i=0;i<p;i++){
            unordered_set<int>evenum,oddnum;
            for(int j=i;j<p;j++){
                if(nums[j]%2==0){
                    evenum.insert(nums[j]);
                }else{
                    oddnum.insert(nums[j]);
                }
                if(evenum.size()==oddnum.size()){
                    maxi=max(maxi,j-i+1);
                }
            }
        }
        return maxi;
    }
};