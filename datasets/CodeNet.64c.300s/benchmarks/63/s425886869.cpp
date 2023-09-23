#include<iostream>
using namespace std;
int main()
{
	int a,b,c,rest;
	while(cin >>a>>b){
		int a2=a,b2=b;
		if(a>b){c=a;a=b;b=c;}
		while((rest=b%a)!=0){
			b=a;
			a=rest;
		}
		cout <<a <<" "<<a2/a*b2 << endl;
	}
	return 0;
}