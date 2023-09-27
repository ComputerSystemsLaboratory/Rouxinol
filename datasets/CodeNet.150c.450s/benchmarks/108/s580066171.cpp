#include <iostream>
using namespace std;


int main() {
	int k[110][110];
int n,l,a,b;
cin>>n;
for(int j=0;j<n;j++){
	cin>>l>>a;
	for(int i=0;i<a;i++){
		cin>>b;
		k[j][b-1]=1;
	}
}
int q[105];
for(int j=0;j<n;j++){
	q[j]=-1;
	if(k[0][j]==1){
		q[j]=1;
	}
}
q[0]=0;
int u=1;
int m=1;
while(m<=n){

	for(int d=0;d<n;d++){
		if(q[d]==m){
			for(int h=0;h<n;h++){
				if(k[d][h]==1 &&q[h]==-1){
					q[h]=m+1;
				}
			}
		}
	}
m=m+1;	
}
for(int y=0;y<n;y++){
	cout<<y+1<<" "<<q[y]<<endl;
}

	return 0;
}