#include<iostream>
#include<string>
using namespace std;
int main(){
	int m;
	int s=100000;
	cin>>m;
	for(int i=0;i<m;i++){
       s = s*1.05;
		if(s%1000!=0)
	 s = ((s/1000)+1)*1000;
	}
	cout<<s<<endl;
    return 0;
}