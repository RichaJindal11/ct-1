#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int sum(int target, vector<int>&nums, int sum, int start, int n, int ans){
        int sol=0;
        int index=0;
        while(index<=nums.size()-1 || sum>=target){
            if(sum>target){
                sum= sum-nums[start];
                start++;
                ans--;
                //cout<<"p";
            }
            else if(sum==target){
                sol = max(sol, ans);
                //cout<<sol;
                sum = sum- nums[start];
                start++;
                ans--;
            }
            else{
                if(index<=nums.size()-1){
                    sum = sum+nums[index];
                    index++;
                    ans++;
                   // cout<<"r";
                }
                
            }
        }
        if(sol==INT_MAX){
            return 0;
        }
        return sol;
        
    }
    int minSubArrayLen(int target, vector<int>& nums) {
        return sum(target, nums, 0, 0, nums.size(), 0);
    }
int main()
{
    int n,t, value;
    cin>>n;
    vector<int>v1;
    for(int i=0; i<n; i++){
        cin>>t;
        v1.push_back(t);
    }
    cin>>value;
    cout<<minSubArrayLen(value, v1);

    return 0;
}