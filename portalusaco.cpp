#include <bits/stdc++.h>
#include <iostream>
#include<queue>
#include<map>
#include<vector>
#include<utility>
using namespace std;
typedef long long ll;
const int sz1=1e6+1;
const int sz=4e5+1;
ll n,x,k,m,q;
int movex[4]={0,0,1,-1};
int movey[4]={-1,1,0,0};
vector<array<ll,4>>edge;
bool yes=0;
ll res=0;
ll d[sz];
ll parent[sz];
ll compsize[sz];
bool rs[sz];
const int mod=1e9+9;
void init(int n){
	for (int i = 1; i <= n; i++){
		parent[i] = i;
		compsize[i] = 1;
	}
}
int find(int a){
	if (a == parent[a]) return a;
	return parent[a] = find(parent[a]);
}
bool unite(int a, int b){
	int roota = find(a), rootb = find(b);
	if (roota == rootb) return false;
	if (compsize[roota] > compsize[rootb]) swap(roota, rootb);
	parent[roota] = rootb;
	compsize[rootb] += compsize[roota];
	return true;
}
map<ll,int>oc;
void kruskal(){
     init(2*n+1);
     ll cnt=0;
     sort(edge.begin(),edge.end());
     for(auto e:edge){
        if(find(e[2])==find(e[1])) continue;
        if(oc[e[3]]>2) continue;
        oc[e[3]]++;
        unite(e[1],e[2]);
        res+=e[0]; 
     }
}
int main(){
   cin>>n;
   for(int i=0;i<n;i++){
       ll u1,u2,v1,v2,w;
       cin>>w>>u1>>v1>>u2>>v2;
       edge.push_back({0,u1,v1,i+1});
       edge.push_back({0,u2,v2,i+1});
       edge.push_back({w,v1,v2,i+1});
       edge.push_back({w,u1,u2,i+1});
       edge.push_back({w,u1,v2,i+1});
       edge.push_back({w,v1,u2,i+1});
   } kruskal();
    cout<<res;
 } 