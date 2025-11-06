#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
         int n=nums.size();
         int maxele=INT_MIN;
         int minele=INT_MAX;
         int maxidx=-1;
         int minidx=-1;
         for(int i=0;i<n;i++)
         {
            if(nums[i]>maxele)
            {
                maxele=nums[i];
                maxidx=i;
            }
            if(nums[i]<minele)
            {
                minele=nums[i];
                minidx=i;
            }
         }
         int leftdeletion=max(minidx,maxidx)+1;
         int rightdeletion=n-min(minidx,maxidx);
         int bothsidedeletion=(n-max(minidx,maxidx))+(min(maxidx,minidx)+1);
         return min({leftdeletion,rightdeletion,bothsidedeletion});

    }
};