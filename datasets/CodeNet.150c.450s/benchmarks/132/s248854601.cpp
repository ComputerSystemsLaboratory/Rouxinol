#include <iostream>
using namespace std;
int can[51];

int game(int n,int p){
	int x=p;
	while(1){
		for(int i=0;i<n;i++){
			if(p==0){
				p=can[i];
				can[i]=0;
			}else{
				p--;
				can[i]++;
			}
			if(x==can[i])return i;
		}
	}
}


int main(){
	int p,n;
	while(1){
		cin >>n>>p;
		if(n==0&&p==0)break;
		for(int i=0;i<n;i++){
			can[i]=0;
		}
		int ans = game(n,p);
		cout <<ans <<endl;
	}
	return 0;
}