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
ll ans=1;
int movex[4]={0,0,1,-1};
int movey[4]={-1,1,0,0};
char c[sz][sz];
vector<array<int,2>>day;
int b[sz1];
int a[sz1];
int main(){
   cin>>n;
   for(int i=0;i<n;i++){
       int u,v;
       cin>>u>>v;
       day.push_back({u,v});
   } sort(day.begin(),day.end());
     int x=1;
     int prevend=day[0][1];
     while (x<n){
         if (prevend>=day[x][1]){
             x++;ans++;
         } else {
             prevend=day[x][1];
             x++;
         }    
     } cout <<ans;
}