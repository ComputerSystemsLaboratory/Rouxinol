#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdlib>
#include <queue>
#include <stack>
using namespace std;
const int maxx=110;
const int infinity=(1<<30);

int A[maxx][maxx];
int d[maxx],p[maxx];//d[i]里面存的是V-T中的点，要加入到T中，选取的最小的权值；
					//d[i]=u;表示的是要把V-T中的点i加入到T中所需要的代价是u；
					//p[v]=u;表示的是V-T中的点v，要和T中的点u连接，即u是v的父节点；
bool flag[maxx];	//用flag来标记这个节点是不是在MST中，true是在T里，false是在V-T里；

int main (){
		int n;
		cin>>n;
		for(int i =1;i<=n;i++){
			for(int j=1;j<=n;j++){
				int e;cin>>e;
				A[i][j]=(e==-1)?infinity:e;
			}
		}

		for(int i=0;i<maxx;i++) {
			flag[i]=false;
			d[i]=infinity;
			p[i]=-1;
		}
		int sum=0,minv,minj;
		flag[1]=true;
		while(1){
			minv=infinity;
			minj=-1;
			for(int i=1;i<=n;i++){
				if(flag[i]==true){
					for(int j=1;j<=n;j++){
						if(A[i][j]!=-1 && A[i][j]<minv && flag[j]==false) {
							minv=A[i][j];
							minj=j;
						} 
					}
				}
			}
//			cout<<minv<<endl;
//			cout<<minj<<endl;
			if(minv==infinity || minj==-1) break;
			flag[minj]=true;
			sum+=minv;
		}
		
		cout<<sum<<endl;
		return 0;
		
}
