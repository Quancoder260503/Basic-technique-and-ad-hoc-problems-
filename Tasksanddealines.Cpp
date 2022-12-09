#include <bits/stdc++.h>
#include <iostream>
#include<queue>
#include<vector>
#include<utility>
using namespace std;
typedef long long ll;
const int sz=2e5+1;
int n,q;
long long x;
int movex[4]={0,0,1,-1};
int movey[4]={-1,1,0,0};
vector<ll>adj[sz];
int pos[sz];
vector<pair<ll,ll>>days;
ll a[sz];
int main(){
     cin>>n;
     for(int i=1;i<=n;i++){
          ll u,v;
          cin>>u>>v;
          days.push_back({u,v}); 
     }
     sort(days.begin(),days.end());
     ll acc = 0; 
     ll ans = 0;
     for(int i = 0; i<days.size();i++){
            acc += days[i].first;
            ans += days[i].second - acc;
     }
     cout<<ans<<endl;
}
