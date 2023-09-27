#include <iostream>
using namespace std;

int ary[30];
int main(){
	int t=0;
	while(cin>>ary[t]){
		t++;
	}
	int res=0;
	for(int i=0;i<t;i++){
		res=0;
		for(int j=0;j<600;j+=ary[i]){
			res+=ary[i]*j*j;
		}
		cout<<res<<endl;
	}
	return 0;
}