#include<iostream>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define pi 3.141592653589793283462
int main(){
	int Aa,Ab,Ac,Ad;
	int ba,bb,bc,bd;
	int p,q;
	cin>> Aa>>Ab>>Ac>>Ad;
	cin>> ba>>bb>>bc>>bd;
	p=Aa+Ab+Ac+Ad;
    q=ba+bb+bc+bd;
	if(p<q)
		cout<<q<<endl;
	else if(p>q)
		cout<<p<<endl;
	else
		cout<<p<<endl;
	return 0;
}