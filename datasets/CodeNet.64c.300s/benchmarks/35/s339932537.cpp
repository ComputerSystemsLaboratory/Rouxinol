#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int n;	cin>>n;
	int data[101][101];
	memset(data,0,sizeof(data));
	int id,num,rout;
	for(int i=0;i<n;i++){
		cin>>id>>num;
		id--;
		for(int j=0;j<num;j++){
			cin>>rout;
			data[id][rout-1]=1;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j)	cout<<" ";
			cout<<data[i][j];
		}
		cout<<endl;
	}
	return 0;
}