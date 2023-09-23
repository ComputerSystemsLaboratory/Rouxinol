#include<iostream>

using namespace std;

void Compare(int a, int b)
{
	if(a>b){
		cout << "a > b" << endl;
	}else if(a<b){
		cout << "a < b" << endl;
	}
	else{
		cout << "a == b" << endl;
	} 
}

int main(void)
{
	int a,b;
	
	cin >> a >> b;
	
	Compare(a,b);
	
}