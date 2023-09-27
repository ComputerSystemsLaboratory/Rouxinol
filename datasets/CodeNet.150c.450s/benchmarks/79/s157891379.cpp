#include <iostream>

using namespace std;

#define NMAX 50

int main(){

	int n,r;
	int p,c;
	int tmp;
	int deck[NMAX];

	while(1){

		cin>>n>>r;
		if(n==0&&r==0) break;

		for(int i=0;i<n;i++){
			deck[i]=n-i;
		}

		while(r--){
			cin>>p>>c;
			for(int k=c-1;k>=0;k--){
				tmp=deck[p-1+c-1];
				for(int i=p-1+c-1;i>0;i--){
					deck[i]=deck[i-1];
				}
				deck[0]=tmp;
			}
		}

		cout<<deck[0]<<endl;

	}

	return 0;
}