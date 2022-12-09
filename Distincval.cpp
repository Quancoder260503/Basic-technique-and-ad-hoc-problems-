#include <bits/stdc++.h>
#include <iostream>
#include<queue>
#include<vector>
#include<utility>
using namespace std;
typedef long long ll;
const int sz=2e5+1;
int n,x,y;
ll t;
ll a[sz];
ll pre=0;
ll ans1,ans;
ll prefix[sz];
bool pick[sz];
int main(){
     cin>>n>>x;
     for(int i=0;i<n;i++) cin>>a[i];
     int j=-1;
     set<int>s;
     for(int i=0;i<n;i++){
         while (j<n-1 and s.size()<=x){
             s.insert(a[++j]);
             ans+=2;
         } s.erase(a[i]);
     } cout<<ans;
}