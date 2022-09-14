#include <bits/stdc++.h>
#include <iostream>
#include<queue>
#include<vector>
#include<utility>
using namespace std;
typedef long long ll;
const int sz=1005;
const int sz1=2e5+1;
int n,m,k;
ll ans=0;
int movex[4]={0,0,1,-1};
int movey[4]={-1,1,0,0};
char c[sz][sz];
int b[sz1];
int a[sz1];
int main(){
   cin>>n>>m>>k;
   for (int i=0;i<n;i++){
        cin>>a[i];
   } for (int i=0;i<m;i++){
       cin>>b[i];
   }  sort(a,a+n);
      sort(b,b+m);
      int x,y; x=y=0;
      while (x<n and y<m){
          if(a[x]-k<=b[y] and b[y]<=a[x]+k){
              ans++;x++;y++;
          } else if (a[x]-k>b[y]){
              y++;
          } else if (a[x]+k<b[y]){
              x++;
          }
      } cout <<ans;
}

