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
ll a[sz1];
ll sum=0;
ll cost=0;
int main(){
   cin>>n;
   for(int i=0;i<n;i++){
       cin>>a[i];
   } sort(a,a+n);
     sum=a[n/2];
     for(int i=0;i<n;i++){
         cost+=abs(sum-a[i]);
     } cout <<cost;
}