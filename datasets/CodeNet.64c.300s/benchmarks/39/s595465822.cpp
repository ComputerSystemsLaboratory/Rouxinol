#include<iostream>
using namespace std;

int main(){
	int total[100];
	int n;
	for(int i=0;i<100;i++){
		total[i]=0;
	}

	for(int i1=0;i1<10;i1++){
		for(int i2=0;i2<10;i2++){
			for(int i3=0;i3<10;i3++){
				for(int i4=0;i4<10;i4++){
					total[i1+i2+i3+i4] += 1;
				}
			}
		}
	}
	while(cin>>n){
		cout<<total[n]<<endl;
	}
	return 0;
}