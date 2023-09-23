#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int input,date[100]={0},a=0,maxx=0;
	while(cin>>input){
		date[input]++;
		a++;
	}
	maxx=max(date[0],date[1]);
	for(int i=0;i<100;i++)maxx=max(maxx,date[i]);
	for(int i=0;i<100;i++)if(date[i]==maxx)cout<<i<<endl;
}