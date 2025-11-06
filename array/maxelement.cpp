#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>freq;
        for(int i=0;i<n;i++)
        {
            freq[nums[i]]++;
        }
        int maxfreq=0;
        int ans=0;
        for(auto it:freq)
        {
            int frequency=it.second;
            if(frequency>maxfreq)
                maxfreq=frequency;
        }
        for(auto it:freq)
        {
            if(it.second==maxfreq)
            {
                ans+=maxfreq;
            }
        }
        return ans;
    }
};
