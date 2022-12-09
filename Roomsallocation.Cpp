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
const int sz=(2e5+10)*2;
int n;
ll pref[sz];
ll a[sz][2];
ll res[sz];
vector<array<ll,3>>c;
ll bit[sz<<1];
int main(){
     cin>>n;
     for(int i=1;i<=n;i++){
          ll u,v ; cin>>u>>v;
          c.push_back({u,v,i});
     }
     sort(c.begin(),c.end());
     priority_queue<pair<ll,int>>pq;
     int lastr=0;
     int rooms=0;
     for(int i=0;i<n;i++){
          if(pq.empty()){
              lastr++;
              pq.push({-c[i][1],lastr});
              res[c[i][2]]=lastr;
          }
          else{
              pair<ll,int>m=pq.top();
              if(-m.first<c[i][0]){
                   res[c[i][2]]=m.second;
                   pq.pop();
                   pq.push({-c[i][1],m.second});
              }
              else{
                  lastr++;
                  pq.push({-c[i][1],lastr});
                  res[c[i][2]]=lastr;
              }
          }
          rooms=max(rooms,(int)pq.size());
     }
     cout<<rooms;
     cout<<endl;
     for(int i=1;i<=n;i++) cout<<res[i]<<' ';
}