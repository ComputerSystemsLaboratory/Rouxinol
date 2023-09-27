#include <iostream>
#include <cmath>
using namespace std;

int main(){
	bool student[31]={},flag=false;
	int s;
	for(int i=1;i<29;i++){
		cin>>s;
		student[s]=true;
	}
	for(int i=1;i<31;i++){
		for(int j=1;j<31;j++){
			if(i!=j&&(student[i]==false&&student[j]==false)){
				cout<<min(i,j)<<endl<<max(i,j)<<endl;
				flag=true;
				break;
			}
		}
		if(flag==true)break;
	}
	return 0;
}