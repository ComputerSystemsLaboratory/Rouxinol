#include <iostream>
using namespace std;

int main(){
	int st,en,num,cnt=0;
	cin>>st>>en>>num;
	for(int i=st;i<=en;i++){
	    if(num%i);
	    else cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}
