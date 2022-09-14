#include <bits/stdc++.h>
#include <iostream>
#include<queue>
#include<vector>
#include<map>
#include<utility>
using namespace std;
typedef long long ll;
const int sz=2e5+1;
int n,X;
ll prefix,ans1;
ll c[sz];
ll ans[sz];
ll pre;
int main(){
    cin>>n;
    stack<pair<int,int>>stacks;
    stacks.push({0,0});
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        while (stacks.size() and stacks.top().first>=x) stacks.pop();
        cout<<stacks.top().second<<" ";
        stacks.push({x,i});
    }
}  