#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        set<int>st;
        for(int i=0;i<nums1.size();i++)
        {
            st.insert(nums1[i]);
        }
        set<int>st2;
        for(int i=0;i<nums2.size();i++)
        {
            if(st.count(nums2[i])!=0)
            {
                st2.insert(nums2[i]);
            }
        }
        for(auto it:st2)
        {
            ans.push_back(it);
        }
        return ans;
    }
};