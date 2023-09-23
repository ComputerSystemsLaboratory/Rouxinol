#include<iostream>
using namespace std;
int main(){
	int a,count;
	for(count=0;;count++){
		cin>>a;
		if(a==0){break;}
		cout<<"Case "<<count+1<<": "<<a<<endl;
	}	
	return 0;
}