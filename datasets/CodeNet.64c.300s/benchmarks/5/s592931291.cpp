#include <iostream>
#include<algorithm>
using namespace std;
int main() {
	int a,one=0,two=0,three=0;
	for (int i=0;i<10;i++){
		cin>>a;
		if (a>three) three=a;
		if (three>two) swap(two,three);
		if (two>one) swap(one,two);
	}
		cout<<one<<endl<<two<<endl<<three<<endl;
	return 0;
}