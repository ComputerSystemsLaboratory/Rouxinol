#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int i;
	int a,b;
	for(i=1;;i++){
		cin >>a >>b;
		if(a==0 && b==0)break;
		if(a>b)swap(a,b);
		cout <<a <<" " <<b <<'\n';
	}
	return 0;
}