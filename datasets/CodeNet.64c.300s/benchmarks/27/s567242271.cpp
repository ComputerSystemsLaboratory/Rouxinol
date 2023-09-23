#include <iostream>
using namespace std;

int main(){
	int n,x;
	while(1){
		int N=0;
		cin >> n >> x;
		if(n==0 && x==0)break;
		for(int j=1;n-2>=j;j++){
			for(int k=j+1;n-1>=k;k++){
				for(int l=k+1;n>=l;l++){
					if(j+k+l==x)++N;

				}
			}
		}
		cout << N << endl;
	}
}