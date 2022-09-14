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
     cin>>n>>x>>y;
     multiset<ll>ms;
    for(int i=1;i<=n;i++){
        int p;cin>>p;t+=p;
        prefix[i]=t;
    } ans=-1e18;
      for(int i=x;i<=n;i++){
        if(i>y) ms.erase(ms.find(prefix[i-y-1]));
        ms.insert(prefix[i-x]);
        ans=max(ans,prefix[i]-*ms.begin());
    } cout<<ans;
}