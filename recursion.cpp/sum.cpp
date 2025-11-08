#include<bits/stdc++.h>
using namespace std;
// User function template for C++
class Solution {
  public:
   int solve(int idx,vector<int>&arr)
   {
       if(idx==0) return arr[0];
       return arr[idx]+solve(idx-1,arr);
   }
    // Function to return sum of elements
    int arraySum(vector<int>& arr) {
        // code here
        int n=arr.size();
        return solve(n-1,arr);
    }
};