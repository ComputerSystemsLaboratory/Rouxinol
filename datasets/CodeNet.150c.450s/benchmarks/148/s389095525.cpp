#include <iostream>
#include <string>
using namespace std;

int main(){
	long long N;
	cin>>N;
	string S;
	long long c0=0,c1=0,c2=0,c3=0;
	for(int i=0;i<N;i++){
		cin>>S;
		if(S=="AC"){
			c0++;
			}else if(S=="WA"){
				c1++;
			}else if(S=="TLE"){
				c2++;
			}else if(S=="RE"){
				c3++;
			}
	}
	cout<<"AC x "<<c0<<endl;
	cout<<"WA x "<<c1<<endl;
	cout<<"TLE x "<<c2<<endl;
	cout<<"RE x "<<c3<<endl;
}