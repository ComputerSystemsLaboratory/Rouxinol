#include<iostream>
using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
    std::cin.tie(0);
	
	char c[30]={0};int i=0;
	while(cin>>c[i++]);
	for(int j=0;j<i-1;j++){
		cout<<c[i-2-j];
	}
	cout<<endl;
	return 0;
}