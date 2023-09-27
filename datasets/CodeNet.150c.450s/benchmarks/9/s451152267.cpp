#include <iostream>
using namespace std;

int main(){
	string t,right,left;
	int m,i,num,count=0;

	while(1){
	cin>>t;
	if(t == "-") break;
	cin>>m;
	for(i=0;i<m;i++){
		cin>>num;
		count+=num;
	}

	right = t.substr(0, count % t.length());
	left = t.substr(count % t.length(), t.length());

	cout<<left<<right<<"\n";

	count = 0;
	}

	return 0;
}