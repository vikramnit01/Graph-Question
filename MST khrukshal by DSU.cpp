#include<bits/stdc++.h>
// by disjoint set
using namespace std;
struct edge{
    int a;
    int b;
    int w;
};
bool comp(edge a,edge b){  //comp take edge type number
   if(a.w < b.w)
   return true;

   return false;
}
edge arr[100000];
int par[10001];
int find(int a){  //path compression
    if(par[a]==-1)
    return a;
    return par[a]=find(par[a]);
}
void merge(int a,int b){
    par[a]=b;}

int main(){
    int n,m,a,b,w;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    par[i]=-1;
    for(int i=0;i<m;i++){
        cin>>arr[i].a>>arr[i].b>>arr[i].w;
    }
    sort(arr,arr+m,comp);
    int sum=0;
    for(int i=0;i<m;i++){
        a=find(arr[i].a);  //finding parent if they are not equal we have to merge
        b=find(arr[i].b);
        if(a!=b){
            sum+=arr[i].w;
            merge(a,b);
        }
    }
    cout<<sum;
}
