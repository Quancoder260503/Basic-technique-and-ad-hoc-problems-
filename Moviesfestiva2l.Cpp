#include <bits/stdc++.h>
#include <iostream>
#include<queue>
#include<map>
#include<vector>
#include<utility>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
typedef long long ll;
typedef long double ld;
const int sz1=5e6+1;
const int sz=2e5+10;
int n;
ll k; 
ll pref[sz];
vector<pair<ll,ll>>movies;
bool cmp(pair<ll,ll>&a,pair<ll,ll>&b){
     return a.second<b.second;
}
int main(){
     cin>>n>>k;
     for(int i=1;i<=n;i++){
          ll u,v; cin>>u>>v;
          movies.push_back({u,v});  
     }
     sort(movies.begin(),movies.end(),cmp);
     int ans = 0;
     multiset<int>ms;
     for(int i = 0; i < k; i++) ms.insert(0);
     for(int i = 0; i < movies.size();i++){
           auto it = ms.upper_bound(movies[i].first);
           if(it == ms.begin()) continue; 
           it--; 
           ms.erase(it);
           ms.insert(movies[i].second);
           ans++; 
     }
     cout<<ans<<endl;
}