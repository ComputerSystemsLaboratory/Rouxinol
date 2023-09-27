#include <iostream>
using namespace std;

long long int fact(long long int n){
	if(n<=1)return n;
	else return n*fact(n-1);
}

int main(int argc, char *argv[]){
	long long int n;
	cin>>n;
	cout<<fact(n)<<endl;
    return 0;
}