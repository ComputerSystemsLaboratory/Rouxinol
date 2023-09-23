#include <iostream>
using namespace std;

int main(){
	int a,b,sum,keta;
	while(cin>>a>>b){
		sum=a+b;
		for(keta=1;;keta++){
			sum=sum/10;
			if(sum==0)break;
		}
		cout<<keta<<endl;
	}
	return 0;
}