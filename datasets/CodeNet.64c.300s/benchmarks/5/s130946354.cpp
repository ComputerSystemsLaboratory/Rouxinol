#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int ary[10];
	for(int i=0;i<10;i++){
		cin>>ary[i];
	}
	for(int i=0;i<10;i++){
		for(int j=i+1;j<10;j++){
			if(ary[i]<ary[j]){
				swap(ary[i], ary[j]);
			}
		}
	}
	cout<<ary[0]<<endl;
	cout<<ary[1]<<endl;
	cout<<ary[2]<<endl;
	return 0;
}