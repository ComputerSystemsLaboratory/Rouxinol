#include <iostream>
using namespace std;
int card[51],s[51];
int n,r;
void shuffle(int p,int c){
	for(int i=1;i<p;i++){
		s[i]=card[i];
	}
	for(int i=1;i<=c;i++){
		card[i]=card[p-1+i];
	}
	for(int i=1;i<p;i++){
		card[i+c]=s[i];
	}
}


int main(){
	int p,c;
	while(1){
		cin >>n>>r;
		if(n==0&&r==0)break;
		for(int i=1;i<=n;i++){
			card[i]=n-i+1;
		}
		for(int i=0;i<r;i++){
			cin >>p>>c;
			shuffle(p,c);
			//for(int j=1;j<=n;j++){
			//	cout << card[j]<<" ";
			//}
		}
		cout <<card[1] <<endl;
	}
	return 0;
}