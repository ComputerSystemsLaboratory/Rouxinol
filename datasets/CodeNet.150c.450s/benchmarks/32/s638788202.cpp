#include<iostream>
using namespace std;

int main(){
	while(1){
		int m,n1,n2;//n2は最大人数
		cin>>m>>n1>>n2;

		if(m==0&&n1==0&&n2==0)
			break;
		
		int P[200];
		for(int i=0;i<m;i++){
			cin>>P[i];
		}
		
		int gap=-1;
 		int n=-1;

 		for(int i=n1;i<=n2;i++){
			int g=P[i-1]-P[i];

			if(gap<=g){
				gap=g;
				n=i;
			}
		}

		cout<<n<<endl;
	}
	
	return 0;
}

