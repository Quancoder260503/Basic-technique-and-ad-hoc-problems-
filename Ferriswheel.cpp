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
   cin>>n>>m;
   for (int i=0;i<n;i++){
        cin>>a[i];
   } sort(a,a+n);   
     ans=0;
     int x=0;
     while (x<n){
          int sum=0;
          if (a[x]+a[x+1]<=m){
              x+=2;
              ans++;
          } else if (a[x]<=m){
              x++;
              ans++;
          } else if(a[x]>m){
              break;
          }
     } cout <<ans;
}