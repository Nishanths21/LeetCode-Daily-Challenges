#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long sumAndMultiply(int n) {
        string p=to_string(n);
        long long q=0;
        int r=0;
        for(char i:p){
            if(i!='0'){
                int s=i-'0';
                q=q*10+s;
                r+=s;
            }
        }
        return q*r;
    }
};