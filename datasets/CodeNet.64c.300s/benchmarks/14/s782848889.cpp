#include<iostream>
using namespace std;

void Judge(int,int);

int main()
{
	int a,b;
	cin >> a >> b;
	Judge(a,b);
	return 0;
}

void Judge(int a,int b){
	if(a<b){
		cout << "a < b" << endl;
	}
	else if(a>b){
		cout << "a > b" << endl;
	}
	else{
		cout << "a == b" << endl;
	}
}