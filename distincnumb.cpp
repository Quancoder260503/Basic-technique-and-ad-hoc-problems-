#include <bits/stdc++.h>
#include <iostream>
#include<queue>
#include<vector>
#include<utility>
using namespace std;
typedef long long ll;
const int sz=1005;
const int sz1=2e5+1;
int n,s;
int d1[sz][sz];
int d0[sz][sz];
bool vis1[sz][sz];
bool vis0[sz][sz];
vector<pair<int,int>>hiv;
int px,py;
int dx,dy;
ll step[sz][sz];
int movex[4]={0,0,1,-1};
int movey[4]={-1,1,0,0};
char c[sz][sz];
int a[sz1];
int main(){
   set<int>s;
   cin>>n;
   for(int i=0;i<n;i++){
       cin>>a[i];
       s.insert(a[i]);
   } cout <<s.size();
}