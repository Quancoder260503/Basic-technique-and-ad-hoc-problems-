#include <bits/stdc++.h>
#include <iostream>
#include<queue>
#include<vector>
#include<utility>
using namespace std;
typedef long long ll;
const int sz=4e5+1;
int n,q,k;
long long x;
int movex[4]={0,0,1,-1};
int movey[4]={-1,1,0,0};
vector<ll>adj[sz];
int pos[sz];
ll a[sz];
ll bit[sz];
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
long long sum(int i){
	   long long c=0;
     for(++i; i > 0 ; i -= (i & -i))
		    c+= bit[i];
	   return c;
}
long long query(int l,int r){
       return sum(r)-sum(l-1);
}
void upd(int i,long long  dif)
{
	   for(++i; i < sz ; i += (i & -i))
	   bit[i] += dif;
}
int main(){
      cin>>n>>k;
      vector<ll>ord;
      for(int i=1;i<=n;i++){
           cin>>a[i];
           ord.push_back(a[i]);
      }
      sort(ord.begin(),ord.end());
      ord.erase(unique(ord.begin(),ord.end()),ord.end());
      map<ll,int>mp;
      map<ll,int>freq;
      ordered_set trs;
      int median = (k-1)>>1;
      for(int i = 0; i < ord.size(); i++) mp[ord[i]]=i+1;
      for(int i = 1; i < k; i++){
           trs.insert({a[i],i});
           freq[a[i]]++;
           upd(mp[a[i]],a[i]);
      }
      for(int i = k; i <= n; i++){
            trs.insert({a[i],i});
            upd(mp[a[i]],a[i]);
            freq[a[i]]++;
            int val = (*trs.find_by_order(median)).first;
            int pos = mp[val];
            long long lower = sum(pos);
            long long higher = query(pos+1,ord.size());
            int mid = trs.order_of_key({val,0});
            long long ans = (1ll)*val*(mid+freq[val])- lower + higher-(1ll)*val*(k-freq[val]-mid);
            cout<<ans<<' ';
            trs.erase(trs.lower_bound({a[i-k+1],0}));
            upd(mp[a[i-k+1]],-a[i-k+1]);
            freq[a[i-k+1]]--;
      }
}
