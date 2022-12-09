#include <bits/stdc++.h>
#include <iostream>
#include<queue>
#include<vector>
#include<utility>
using namespace std;
typedef long long ll;
const int sz=2e5+1;
int n,x,k,i,j,w,m;
int movex[4]={0,0,1,-1};
int movey[4]={-1,1,0,0};
vector<ll>adj[sz];
int pos[sz];
int main(){
      cin>>n;
      for(int i=1;i<=n;i++){
          int x; cin>>x;
          pos[x]=i;
      }
      int itr = INT_MAX;
      int ans = 0;
      for(int i=1;i<=n;i++){
           if(itr>pos[i]) ans++;
           itr = pos[i];
      }
      cout<<ans<<endl;
}