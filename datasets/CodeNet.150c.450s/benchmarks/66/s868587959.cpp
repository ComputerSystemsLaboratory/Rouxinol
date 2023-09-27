#include <iostream>
#include <cstring>
//#include <cstdio>

using namespace std;

int main(){
	int N,M;
	//scanf("%d",&N);
	cin >> N;
	int flag=0,oc=0,i,j;
	char U[256][11];
	for(i=0;i<N;i++){
		//scanf("%s",U[i]);
		cin >> U[i];
	}
	//scanf("%d",&M);
	cin >> M;
	char T[11];
	for(i=0;i<M;i++){
		flag=0;
		//scanf("%s",T);
		cin >> T;
		for(j=0;j<N;j++){
			if(strcmp(U[j],T)==0){
				flag=1;
				break;
			}
		}
		if(flag==0){
			cout<<"Unknown "<<T<<endl;
		}else if(oc==0){
			cout<<"Opened by "<<T<<endl;
			oc=1;
		}else{
			cout<<"Closed by "<<T<<endl;
			oc=0;
		}
	}


	return 0;
}