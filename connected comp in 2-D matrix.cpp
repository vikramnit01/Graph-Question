#include<bits/stdc++.h>
using namespace std;
bool vis[1001][1001];
int v[1001][1001];
int n,m;
//connected comp n 2-D mtrix if(v[i][j]=1 then yon can move 
 bool isValid(int x,int y){
 	if(x<1||x>n||y<1||y>m)
 	return false;
 	if(vis[x][y]==true||v[x][y]==0)
 	return false;
 	return true;
 }
 int dx[]={-1,0,1,0};
 int dy[]={0,1,0,-1};
 void dfs(int x,int y){
 	  vis[x][y]=true;
 	  for(int i=0;i<4;i++)
 	  if(isValid(x+dx[i],y+dy[i]))
 	  dfs(x+dx[i],y+dy[i]);
 	  
 }
 int main(){
 	int n,m,cc=0;
 	cin>>n>>m;
 	for(int i=1;i<=n;i++)
 	for(int j=1;j<=m;j++)
 	cin>>v[i][j];
 	for(int i=1;i<=n;i++)
 	for(int j=1;j<=m;j++)
 	{
 		if(vis[i][j]==0&&v[i][j]==1)
 		dfs(i,j),cc++;
	 }
	 cout<<cc<<"\n";
 }
 //input
 //1 0 1 1 1
 //0 0 1 0 1
 
