#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;

int main(){
	int m[10];
	for(int i=0;i<10;i++)
	cin>>m[i];
	
	sort(m,m + 10,greater<int>());
	cout<<m[0]<<endl<<m[1]<<endl<<m[2]<<endl;
	
	
	return 0;
}
