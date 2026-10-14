#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(sum>9*num) return "";
        string ans="";
        for(int i=0;i<num;++i){
            int val=min(9,sum);
            ans+=(val+'0');
            sum-=val;
        }
        if(sum!=0) return "";
        return ans;
    }
};