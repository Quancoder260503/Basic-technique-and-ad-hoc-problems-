#include <bits/stdc++.h>
#include <iostream>
#include<queue>
#include<vector>
#include<utility>
using namespace std;
typedef long long ll;
const int sz=2e5+1;
int n,q,k;
long long x;
int movex[4]={0,0,1,-1};
int movey[4]={-1,1,0,0};
vector<ll>adj[sz];
int pos[sz];
ll a[sz];
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds; 
typedef tree <
	pair<int, int>,
	null_type,
	less<pair<int, int>>,
	rb_tree_tag,
	tree_order_statistics_node_update> ordered_set;

int main(){
      cin>>n>>k;
      ordered_set trs;
      for(int i=1;i<=n;i++) cin>>a[i];
      for(int i=1;i<k;i++) trs.insert({a[i],i});
      int median = (k-1)>>1;
      for(int i=k;i<=n;i++){
           trs.insert({a[i],i});
           int ans = (*trs.find_by_order(median)).first;
           cout<<ans<<' ';
           trs.erase(trs.lower_bound({a[i-k+1],0}));
      }
      return 0;
}