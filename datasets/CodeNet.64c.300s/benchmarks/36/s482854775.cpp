#include <iostream>
using namespace std;

void sort(int *,int *);

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	if(a>b) sort(&a,&b);
	if(a>c) sort(&a,&c);
	if(b>c) sort(&b,&c);
	cout << a <<" " << b << " " << c << endl;
}

void sort(int *a,int *b){
	int w;
	w=*a;
	*a=*b;
	*b=w;
}