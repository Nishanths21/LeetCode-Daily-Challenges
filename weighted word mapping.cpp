#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string res="";
        for(const string& w:words){
            long long curr=0;
            for(char i:w){
                curr+=weights[i-'a'];
            }
            int rem=curr%26;
            char p='z'-rem;
            res+=p;
        }
        return res;
    }
};