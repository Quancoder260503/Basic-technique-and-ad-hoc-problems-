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
vector<pair<ll,int>>ko;
vector<pair<ll,int>>ju;
ll a[sz];
int main(){
     cin>>n;
     ll mx = 0;
     ll acc = 0;
     for(int i=1;i<=n;i++){
          ll x; cin>>x;
          mx = max(x,mx);
          acc +=x;
     }
     cout<<max(2*mx,acc)<<endl;
}
