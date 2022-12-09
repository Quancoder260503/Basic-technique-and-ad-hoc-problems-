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
ll a[sz];
mt19937 rng((uint32_t)chrono::steady_clock::now().time_since_epoch().count());
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
struct chash { /// use most bits rather than just the lowest ones
	const uint64_t C = ll(2e18*acos((long double)-1))+71; // large odd number
	const int RANDOM = rng();
	ll operator()(ll x) const { /// https://gcc.gnu.org/onlinedocs/gcc/Other-Builtins.html
		return __builtin_bswap64((x^RANDOM)*C); }
};
template<class K,class V> using vm = gp_hash_table<K,V,chash>;
int main(){
      cin>>n>>x;
      for(int i = 0; i < n; i++) cin>>a[i];
      vm<int,pair<int,int>>mp;
      for(int i = n - 1 ; i >= 0; i--){
          for(int j = i -1 ; j >= 0; j--){
               ll dis = x - a[i]-a[j];
               if(mp.find(dis) != mp.end()){
                    //cout<<x<<' '<<dis<<' '<<ar[i][1]<<' '<<ar[j][1]<<endl;
                    cout<<i+1<<' '<<j+1<<' '<<mp[dis].first+1<<' '<<mp[dis].second+1;
                    return 0;
               }
          }
          for(int j = i + 1; j < n;j++) mp[a[i]+a[j]]={i,j};
      } 
      cout<<"IMPOSSIBLE"<<endl;
}