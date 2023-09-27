#include <iostream>
using namespace std;
int main(){
	int n;	cin>>n;
	int data[n];
	for(int i=0;i<n;i++)	cin>>data[i];
	for(int i=0;i<n;i++){
		cout<<"node "<<i+1<<": key = "<<data[i]<<", ";
		if(i>0)	cout<<"parent key = "<<data[(i+1)/2-1]<<", ";
		if((i+1)*2-1<n)	cout<<"left key = "<<data[(i+1)*2-1]<<", ";
		if((i+1)*2<n)	cout<<"right key = "<<data[(i+1)*2]<<", ";
		cout<<endl;
	}
	return 0;
}