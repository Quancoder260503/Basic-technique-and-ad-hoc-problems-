#include <bits/stdc++.h>
#include <iostream>
#include<queue>
#include<vector>
#include<utility>
using namespace std;
typedef long long ll;
const int sz=1005;
const int sz1=2e5+1;
int n,x,k,i,j;
ll ans=0;
ll res=1;
int movex[4]={0,0,1,-1};
int movey[4]={-1,1,0,0};
char c[sz][sz];
vector<array<ll,2>>ar;
vector<array<ll,2>>ar1;
int b[sz1];
int a[sz1];
int main(){
   cin>>n;
   for (int i=0;i<n;i++){
        int l,r;cin>>l>>r;
        ar.push_back({l,1});
        ar.push_back({r,-1});
        ar1.push_back({l,-1});
        ar1.push_back({r,1});
   } 
     sort(ar.begin(),ar.end());
     sort(ar1.begin(),ar1.end());
     for (int i=0;i<n;i++){
       ans+=ar[i][1];
       res=max(ans,res);
     }
     ans=0;
     reverse(ar1.begin(),ar1.end());
     for (int i=0;i<n;i++){
       ans+=ar1[i][1];
       res=max(ans,res);
   } cout <<res;
}