#include <iostream>
using namespace std;
int main(){
	int num[5];
	cin>>num[0]>>num[1]>>num[2]>>num[3]>>num[4];
	int a;
	for(int i=0;i<4;i++){
		for(int j=i+1;j<=4;j++){
			if(num[i]<num[j]){
				a = num[i];
				num[i] = num[j];
				num[j] = a;
			}
		}
	}
	for(int k=0;k<5;k++){
		if(k != 0) cout<<" ";
		cout<<num[k];
	}
	cout<<endl;
	return 0;
}