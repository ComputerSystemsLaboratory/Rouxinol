#include<iostream>

using namespace std;

bool data[31];

int main(){
	for(int i=0;i<31;i++)data[i]=true;
	for(int i=0;i<28;i++){
		int x;
		cin>>x;
		data[x]=false;
	}
	for(int i=1;i<31;i++)if(data[i])cout<<i<<endl;
}