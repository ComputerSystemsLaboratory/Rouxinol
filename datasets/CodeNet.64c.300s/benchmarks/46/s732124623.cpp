#include<iostream>
#define N 1000006
using namespace std;


void init(bool array[]){
	for(int i=0;i<N;i++){
		array[i]=true;
	}
}

void eratos(bool array[]){
	for(int i=2;i*i<N;i++){
		if(array[i]==true){
			for(int j=0;i*(j+2)<N;j++){
				array[i*(j+2)] = false;
			}
		}
	}
	array[1]=false;
}

int main(){
	bool array[N];
	init(array);
	eratos(array);

	while(1){
		int  a,d, n,cnt=0;
		cin >> a >> d >>n;
		if(a+d+n==0) break;
		for(int i=a;;i+=d){
			if(array[i]){
				cnt++;
			}
			if(cnt==n){
				cout << i << endl;
				break;
			}
		}

	}
	return 0;
}