#include <bits/stdc++.h>
#include <iostream>
#include<queue>
#include<vector>
#include<utility>
using namespace std;
typedef long long ll;
const int sz=1005;
const int sz1=2e5+1;
int n,x,k,i,j,w;
ll ans=0;
ll res=1;
int movex[4]={0,0,1,-1};
int movey[4]={-1,1,0,0};
char c[sz][sz];
vector<array<ll,2>>ar;
vector<array<ll,2>>ar1;
int b[sz1];
ll a[sz1];
ll sum=0;
ll cost=0;
bool check(ll t){
    ll val=w;
    for(int i=0;i<n;i++){
        val=val-(t/a[i]);
        if (val<=0) return 1;
    } return 0;
}
ll bsearch(ll l ,ll r){
    while (l<r){
        ll mid=(l+r)/2;
        if(!check(mid)) l=mid+1;
        else r=mid; 
    } return l;
}
int main(){
   cin>>n>>w;
   for(int i=0;i<n;i++){
       cin>>a[i];
   } sort(a,a+n);
     cout<<bsearch(1,1e18);
}