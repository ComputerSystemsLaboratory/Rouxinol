#include <iostream>
#include <string>

using namespace std;

void Com(int *a,int *b){
	if((*a) > (*b)){
		int x = (*a);
		(*a) = (*b);
		(*b) = x;
	}
}
int main(){
	int a,b,c;
	cin >> a;
	cin >> b;
	cin >> c;
	Com(&a,&b);
	Com(&b,&c);
	Com(&a,&b);
	cout << a << " " << b << " "  << c <<endl;
	return 0;
}