#include <iostream>
#include <queue>

using namespace std;

int D[110]={0};
void bfs(int src,int n,int g[110][110]){

queue<int> Q;
Q.push(src);
D[src]=0;
while (! Q.empty()){
	int cur =Q.front();
	Q.pop();
	for(int r=0;r<n;r++){
		if (g[cur][r]==1&&D[r]==0){
			D[r]=D[cur]+1;
			Q.push(r);
		}
	}
}
	
}



int main() {
int n,g[110][110]={0};
cin>>n;
int j,num,t;
for(int k=0;k<n;k++){
cin>>j>>num;
for(int kk=0;kk<num;kk++){
	cin>>t;
	g[k][t-1]=1;
}
}
bfs(0,n,g);
cout<<"1 0"<<endl;
for(int a=1;a<n;a++){
	if(D[a]!=0){
	cout<<a+1<<" "<<D[a]<<endl;
}
else{
	cout<<a+1<<" -1"<<endl;
}
}
	return 0;
}