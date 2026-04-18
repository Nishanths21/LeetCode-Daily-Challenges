#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int mirrorDistance(int n) {
        int p=0, curr=n;
        while(curr>0){
            p=p*10+(curr%10);
            curr/=10;
        }
        return abs(n-p);
    }
};