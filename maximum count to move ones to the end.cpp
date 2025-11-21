#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int maximummoves(string s){
        int ones=0,res=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                ones++;
            }
            else if(i>0 && s[i]=='1'){
                res+=ones;
            }
        }
        return res;
    }
};