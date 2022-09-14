#include <bits/stdc++.h>
#include <iostream>
#include<queue>
#include<vector>
#include<utility>
using namespace std;
typedef long long ll;
const int sz=101;
const int sz1=2e5+1;
int n,x,k,i,j,w,m;
ll res=1e18;
ll ans=0;
int movex[4]={0,0,1,-1};
int movey[4]={-1,1,0,0};
char c[sz1];
vector<ll>adj[sz];
ll d[sz1];
vector<array<ll,2>>a;
ll dp[sz][sz];
int main(){
   cin>>n;
    for (int i=0;i<n;i++){
        cin>>d[i];
    } ll p=d[0];x=1;
      for (int i=1;i<n;i++){
        if (d[i]<p) {p=d[i];x++;}
    } cout<<x;
}