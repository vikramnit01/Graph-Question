void dfs(int i,int j,vector<int> A[], int N, int M){
    if(i>=N||i<0||j>=M||j<0||A[i][j]==0||A[i][j]==-1)
    return;
    A[i][j]=-1;
    dfs(i+1,j,A,N,M);
    dfs(i-1,j,A,N,M);
    dfs(i,j+1,A,N,M);
    dfs(i,j-1,A,N,M);
    dfs(i+1,j+1,A,N,M);
    dfs(i-1,j-1,A,N,M);
    dfs(i+1,j-1,A,N,M);
    dfs(i-1,j+1,A,N,M);
}

int findIslands(vector<int> A[], int N, int M) {
    int cnt=0;
 for(int i=0;i<N;i++)
 for(int j=0;j<M;j++)
 {
     if(A[i][j]==1)
     {
         dfs(i,j,A,N,M);
         cnt++;
     }
 } 
 return cnt;
 
 int main(){
 	input the matrix
 }
