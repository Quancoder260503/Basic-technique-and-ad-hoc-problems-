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
ll a[sz];
ll res[sz];
int main(){
     cin>>k>>n;
     set<ll>s;
     multiset<ll>se;
     s.insert(k);
     s.insert(0);
     se.insert(k);
     for(int i=1;i<=n;i++) cin>>a[i];
     for(int i=1;i<=n;i++){
          auto itr  = s.upper_bound(a[i]);
          auto itl = itr ;
          itl--;
          auto cur = se.find((*itr)-(*itl));
          se.erase(cur);
          se.insert((*itr)-a[i]);
          se.insert(a[i]-(*itl));
          s.insert(a[i]);
          //for(auto its=se.begin();its!=se.end();its++) cout<<(*its)<<' ';
          auto ans = se.end();
          ans--;
          cout<<(*ans)<<' ';
     }
     return 0; 
}