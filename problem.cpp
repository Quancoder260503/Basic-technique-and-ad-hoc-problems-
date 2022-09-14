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
    for (int i=0;i<n;i++){
        cin>>c[i];
    } for(int i=1;i<n;i++){
        int j=i-1; int p=0;
        if (c[i]>c[j]){ ans[i]=j+1;continue ;}
        while (j>0 and c[i]<c[j]){ j--;}
        if(j==0 and c[i]<c[j]) ans[i]=0;
        else ans[i]=j+1;
    } for(int i=0;i<n;i++){
        cout <<ans[i]<<" ";
    }
}    