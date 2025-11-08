#include<bits/stdc++.h>
using namespace std;
// User function template for C++
class Solution {
  public:
    string removeDuplicates(string &s) {
        // code here
        string ans="";
        int n=s.size();
        unordered_map<char,int>mpp;
        for(int i=0;i<n;i++)
        {
            if(mpp.find(s[i])==mpp.end())
            {
                ans+=s[i];
                
            }
            mpp[s[i]]++;
        }
        return ans;
    }
};