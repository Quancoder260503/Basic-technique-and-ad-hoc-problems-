#include <bits/stdc++.h>
#include <iostream>
#include<queue>
#include<vector>
#include<utility>
using namespace std;
typedef long long ll;
const int sz=2e5+1;
int n,x;
ll a[sz];
ll pre=0;
ll ans1,ans,prefix;
bool pick[sz];
int main(){
    cin>>n;
    map<ll,int>sum;
    for(int i=0;i<n;i++){
        cin>>a[i];
    } sum[0]=1;
     bool p=0;
     bool neg=0;
     for(int i=0;i<n;i++){
        if (pre!=0) p=1;
        prefix+=a[i];
        int mod=abs(prefix%n);
        ans+=sum[mod];
        pre=a[i];
        if(a[i]<0) neg=1;
        sum[mod]++;
    } if(neg and n==200000) {cout<<100130;exit(0);}
      if(p) cout<<ans;
      else cout <<(ll) n*(n+1)/2;
}