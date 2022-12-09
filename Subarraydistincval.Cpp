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
int main(){
      cin>>n>>k;
      for(int i=1;i<=n;i++) cin>>a[i];
      int left = 1;
      int right = 1;
      map<ll,ll>freq;
      int disval = 0;
      ll ans = 0;
      while (left <= n){
           while (right <= n){
                if(!freq.count(a[right]) and disval == k) break;
                if(!freq.count(a[right])) disval++;
                freq[a[right]]++;
                right++;
           }
           ans += (right-left);
           if(freq[a[left]]==1){
                disval--;
                freq.erase(a[left]);
           }
           else freq[a[left]]--;
           left++;
      }  
      cout<<ans<<endl;
}
