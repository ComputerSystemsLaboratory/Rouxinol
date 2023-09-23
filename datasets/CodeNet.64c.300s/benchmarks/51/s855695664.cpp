#include<iostream>

using namespace std;
long long int faktorial(long long int n){
	if (n==0)return 1;
	return n*faktorial(n-1);
}
long long int n,z;
int main (){



while(cin>>n){

	  if(n>=0&&n<21){
		z = faktorial(n);
	
	
cout<<z<<endl;}}

return 0;
	
}