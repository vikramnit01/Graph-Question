#include<bits/stdc++.h>
using namespace std;
#define int long long
const int inf=1e9;
vector<pair<int,int> >adj[1001];
int32_t main(){
	int n,m,a,b,w;
	cin>>n>>m;
	while(m--){
		cin>>a>>b>>w;
		adj[a].push_back({b,w});
		adj[b].push_back({a,w});
	}
priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > >pq;
	vector<int>dis(n+1,inf);
	pq.push({0,1});
	dis[1]=0;
	while(!pq.empty()){
		int curr_d=pq.top().first;   //curr_d is current distance
		int curr=pq.top().second;  //current node
		pq.pop();
		for(pair<int,int>edge:adj[curr]){
			if(curr_d+edge.second<dis[edge.first]){
				dis[edge.first]=curr_d+edge.second;
				pq.push({dis[edge.first],edge.first});
			}
		}
	}
	for(int i=1;i<=n;i++)
	cout<<dis[i];
}
