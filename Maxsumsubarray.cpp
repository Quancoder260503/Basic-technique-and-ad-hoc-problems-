#include <bits/stdc++.h>
#include <iostream>
#include<queue>
#include<vector>
#include<map>
#include<utility>
using namespace std;
typedef long long ll;
const int sz=2e5+1;
int n,X;
ll prefix,ans;
ll c[sz];
ll pre;
set<int>s;
int main(){
   cin>>n>>X;
   map<ll,int>sum;
   sum[0]=1;
   bool p=1;
   for(int i=0;i<n;i++){
       if(pre!=0) p=0;
       int x;cin>>x;
       prefix+=x;
       pre=x;
       sum[prefix]++;
       ans+=sum[prefix-X];
   } if(!p) cout <<ans;
     else cout <<(ll) n*(n+1)/2;
}    