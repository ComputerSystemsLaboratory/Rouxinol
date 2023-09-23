#include <iostream>
using namespace std;

void swap(int *a,int *b)
{
	int temp=0;
	temp=*a;
	*a=*b;
	*b=temp;
	
	return;
}

int main(){
	int a,b,c;
	
	cin >> a >> b >> c;
	if(a>b) swap(a,b);
	if(b>c) swap(b,c);
	if(a>b) swap(a,b);
	
	cout << a << " " << b << " " << c <<endl;
		
	return 0;
}