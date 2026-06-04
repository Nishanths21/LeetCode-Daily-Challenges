#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int totalWaviness(int num1, int num2) {
        long long r=0;
        for(int i=num1;i<=num2;i++){
            string p=to_string(i);
            if(p.size()<3) continue;
            int q=0;
            for(int j=1;j+1<p.size();j++){
                int a=p[j-1]-'0';
                int b=p[j]-'0';
                int c=p[j+1]-'0';
                if(b>a && b>c) q++;
                else if(b<a && b<c) q++;
            }
            r+=q;
        }
        return r;
    }
    
};