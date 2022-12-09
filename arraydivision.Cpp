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
ll a[sz];
ll ans;
bool srch(ll x){
     int sub = 0; 
     int start = 0;
     while (start<=n){
         ll acc = 0;
         while (start<=n and acc+a[++start]<=x) acc += a[start];
         if(acc+a[start]>x) start--;
         ans = max(ans,acc);
         sub++; 
     }
     if(sub <= k and sub > 1) return true;
     else return false;
}
int main(){
     cin>>n>>k;
     ll pf = 0;
     ll mx = 0;
     for(int i=1;i<=n;i++){
          cin>>a[i]; 
          pf+=a[i];
          mx=max(mx,a[i]);
     } 
     ll high=pf;
     ll low=mx;
     while(low<high){
        ll mid = (high-low)/2+low;
        if(srch(mid)) high=mid;
        else low = mid+1;
     }
     ans = 0;
     srch(low);
     cout<<ans<<endl;
}