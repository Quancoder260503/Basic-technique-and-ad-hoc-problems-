#include <bits/stdc++.h>
#include <iostream>
#include<queue>
#include<vector>
#include<utility>
using namespace std;
typedef long long ll;
const int sz=2e5+1;
int n,q;
int movex[4]={0,0,1,-1};
int movey[4]={-1,1,0,0};
vector<ll>adj[sz];
int pos[sz];
int a[sz];
int main(){
      cin>>n>>q;
      for(int i = 1; i <=n ;i++){
          cin>>a[i];
          pos[a[i]]=i;
      }
      int ans = 0;
      int itr =INT_MAX;
      for(int i = 1;i <=n ;i++){
          if(itr>pos[i]) ans++;
          itr = pos[i];
      }
      pos[0]=INT_MAX;
      for(int i=1;i<=q;i++){
           int x,y,u,v;  cin>>x>>y;
           u = a[x]; v = a[y];
           if(pos[u]<pos[u-1]) ans--;
           if(pos[v]<pos[v-1]) ans--;
           if(u+1!=v and u+1<=n and pos[u]>pos[u+1]) ans--;
           if(v+1!=u and v+1<=n and pos[v]>pos[v+1]) ans--;
           swap(pos[u],pos[v]); swap(a[x],a[y]);
           if(pos[u]<pos[u-1]) ans++;
           if(pos[v]<pos[v-1]) ans++;
           if(u+1!=v and u+1<=n and pos[u]>pos[u+1]) ans++;
           if(v+1!=u and v+1<=n and pos[v]>pos[v+1]) ans++;
           cout<<ans<<endl;
      }
}