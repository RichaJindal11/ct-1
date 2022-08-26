#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,t;
    cin>>n;
    vector<int>v1;
    for(int i=0; i<n; i++){
        cin>>t;
        v1.push_back(t);
    }
    
    for(int i=0; i<n; i++){
        vector<vector<int>>ans1;
        vector<int>ans;
        bool flag= false;
        int sum=0;
        int j;
        for(j=i; j<n; j++){
            sum = sum + v1[j];
            if(sum==0){
                flag=true;
                break;
            }
            ans.push_back(v1[j]);
        }
        ans.push_back(v1[j]);
       // cout<<endl;
        if(flag==true){
            for(int j=0; j<ans.size(); j++){
                cout<<ans[j]<<" ";
            }
            cout<<endl;
        }
    }
// 6
// 4 2 -3 -1 0 4

// 10
// 3 4 -7 3 1 3 1 -4 -2 -2

    return 0;
}