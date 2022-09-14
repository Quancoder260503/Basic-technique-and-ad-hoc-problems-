#include <bits/stdc++.h>
#include <iostream>
#include<queue>
#include<vector>
#include<utility>
using namespace std;
typedef long long ll;
const int sz=1005;
const int sz1=2e5+1;
int n,x,k,i,j;
ll ans=0;
int movex[4]={0,0,1,-1};
int movey[4]={-1,1,0,0};
char c[sz][sz];
vector<array<ll,2>>ar;
int b[sz1];
int a[sz1];
int main(){
   cin>>n>>x;
   for (int i=0;i<n;i++){
        cin>>a[i];
        ar.push_back({a[i],i});
   }
    i=0;j=n-1;
    sort(ar.begin(),ar.end());
    while (i<n and j>0){
        if (ar[i][0]+ar[j][0]==x){
            if(ar[i][1]==ar[j][1]) cout <<"IMPOSSIBLE";
            else cout <<ar[i][1]+1<<" "<<ar[j][1]+1<<endl;
            exit(0);
        }else if (ar[i][0]+ar[j][0]<x) i++;
         else if (ar[i][0]+ar[j][0]>x) j--;
    } cout <<"IMPOSSIBLE";
}