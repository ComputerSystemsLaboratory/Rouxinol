#include<iostream>
using namespace std;

int main(){
	int a,b,c,d;
	int e=0;
	  cin>>a>>b>>c;
	for(d=a;d<=b;d++){
		if(c%d==0){
			e+=1;
		}
	}
	cout<<e<<endl;
	return 0;
}