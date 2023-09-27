#include <iostream>
using namespace std;

int main(){
	int n[36]={};
	int m;
	for(int a=0; a<10; a++){
		for(int b=0; b<10; b++){
			for(int c=0; c<10; c++){
				for(int d=0; d<10; d++){
					n[a+b+c+d-1]+=1;
				}
			}
		}
	}

	while(cin>>m){
		if(m>36){
			cout << "0" << endl;
			continue;
		}
		cout << n[m-1] << endl;
	}

	return 0;
}