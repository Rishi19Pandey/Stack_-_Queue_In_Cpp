//              findNextMaxElement.cpp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        stack<int> st;
        map<int,int> mp;
        for(int i = nums2.size() - 1 ; i >= 0 ; i--){
            if(st.empty()){
                st.push(nums2[i]);
                mp.insert({nums2[i],-1});
            }
            else if(nums2[i]<st.top()){
                mp.insert({nums2[i],st.top()});
                st.push(nums2[i]);
            }
            else if(nums2[i]>st.top()){
                while(nums2[i]>st.top()){
                    st.pop();
                    if(st.empty()){
                        break;
                    }
                }
                if(st.empty()){
                    mp.insert({nums2[i],-1});
                    st.push(nums2[i]);
                }
                else if(!st.empty()){
                    mp.insert({nums2[i],st.top()});
                    st.push(nums2[i]);
                }
            }
        }
        for(int i = 0 ; i < nums1.size() ; i++){
            if(mp.find(nums1[i]) != mp.end()){
                ans.push_back(mp[nums1[i]]);
            }
        }
        return ans;
    }

int main(){
   vector<int> nums1 = {2,4};
   vector<int> nums2 = {1,2,3,4};
   vector<int> res = nextGreaterElement(nums1,nums2);
   for(auto i : res){
    cout<<i<<" ";
   }
   return 0;
}