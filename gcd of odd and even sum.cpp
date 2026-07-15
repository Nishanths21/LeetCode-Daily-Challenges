#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int gcd(int p,int q){
            return q==0?p: gcd(q,p%q);
    }
    int gcdOfOddEvenSums(int n) {
        int od=0, ev=0;
        for(int i=1;i<=n;++i){
            od+=(i<<1) -1;
            ev+=i<<1;
        }
        return gcd(od,ev);
    }
};