#include <iostream>
using namespace std;
const int maxx=110;
const int infinity=(1<<30);
 
int A[maxx][maxx];
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
 
		for(int i=0;i<maxx;i++) flag[i]=false;
		int sum=0,minv,minj;
		flag[1]=true;
		while(1){
			minv=infinity;
			minj=-1;
			for(int i=1;i<=n;i++){
				if(flag[i]==true){//找到一个在T中的顶点
					for(int j=1;j<=n;j++){
						if(A[i][j]!=-1 && A[i][j]<minv && flag[j]==false) {//找到一个在V-T中的顶点
							minv=A[i][j];//找到权值的最小值minv
							minj=j;//找到权值的最小值对应的顶点，就是下一步要加入到MST中的顶点minj
						} 
					}
				}
			}
//			cout<<minj<<endl;
			if(minv==infinity || minj==-1) break;
			flag[minj]=true;
			sum+=minv;
		}
		
		cout<<sum<<endl;
		return 0;
		
}

