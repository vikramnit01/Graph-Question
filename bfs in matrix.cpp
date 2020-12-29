    #include<bits/stdc++.h>
    using namespace std;
    #define rep(i,n) for(li i=0;i<n;i++)
    #define li unsigned long long int
    #define ll long long int
    #define pb push_back
    #define all(v) sort(v.begin(),v.end())
    const int N = 40043;
    const ll mod = 1e9 + 7;
    #define FAST_IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    #define f first
    #define s1 second
     int main()
     {
         int n,m,cnt=0,cnt1=0;
         cin>>n>>m;
         int a[n][m],vis[n][m];
         queue<pair<int,int>>q;
         int ans[n][m];
         rep(i,n)
         {
             rep(j,m)
             {
                 vis[i][j]=0;
                 ans[i][j]=0;
                 cin>>a[i][j];
                 if(a[i][j]==2)
                 {
                     q.push({i,j}),vis[i][j]=1;
                 }
                 
             }
         }
         int ans1=0;
         int dx[4]={-1,1,0,0};
         int dy[4]={0,0,1,-1};
         while(q.size())
         {
             int x=q.front().f; //first 
             int y=q.front().s1; //second
             int e=0;
             q.pop();
             rep(i,4)
             {
                if(dx[i]+x<n && dx[i]+x>=0 && dy[i]+y<m && dy[i]+y>=0)  //for checking it is matrix cell is valid or not
                {
                    if(a[dx[i]+x][dy[i]+y]==1 && vis[dx[i]+x][dy[i]+y]==0)
                    {
                        a[dx[i]+x][dy[i]+y]=2;
                        vis[dx[i]+x][dy[i]+y]=1;
                        e=1;
                        q.push({dx[i]+x,dy[i]+y});
                        ans[dx[i]+x][dy[i]+y]=ans[x][y]+1;
                    }
                }
             }
             if(e==1)
             ans1=max(ans1,ans[x][y]+1);
         }
         rep(i,n)
         {
             rep(j,m)
             {
                 if(a[i][j]==1)
                 {
                     cout<<-1;
                     return 0;
                 }
             }
         }
         cout<<ans1;   
     }
