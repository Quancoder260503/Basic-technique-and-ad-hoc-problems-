#include <bits/stdc++.h>
#pragma GCC target("popcnt")
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
const int sz = 4e5 + 1;
const int N = (1 << 19);
const int M = 1e6 + 10;
const int mod = (1 << 32);
long long n,m,k,q,x;
vector<pii>adj[N + 1];
bool vis[N + 1];
int main(){
     scanf("%d",&n);
     for(int i = 1; i <= n; i++){
          long long l,r;
          scanf("%lld%lld",&l,&r);  
          long long ans = 0; 
          long long pos = 0; 
          for(int k = 40; k >= 0; k--){
                long long low = 0; 
                long long high = (long long) pow(r, 1.0 / k) + 10;
                while(low < high){
                    long long mid = (low + high) >> 1;  
                    long long t = 1;
                    for(int j = 0; j < k; j++){
                         t = t * mid; 
                         if(t > l) break;
                    }
                    if(t >= l) high = mid;
                    else low = mid + 1; 
                }
                long long chk = 1; 
                for(int j = 0; j < k; j++){
                     chk = chk * low; 
                     if(chk > r) break; 
                }
                if(chk >= l && chk <= r){
                      printf("Case #%d: %lld\n",i,k);
                      break; 
                }
          }
     }

