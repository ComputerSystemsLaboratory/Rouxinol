#include <iostream>
using namespace std;

long long int f(int a){
	return (long long int)a*a;
}

int main(){
	int d , od , num;
	long long int s=0;
	while(cin>>d){
		num=600/d;
		od=d;
		d=0;
		for(int i=0 ; i<num ; i++){
			s+=od*f(d);
			d+=od;
		}
		cout << s << endl;
		s=0;
	}
	return 0;
}