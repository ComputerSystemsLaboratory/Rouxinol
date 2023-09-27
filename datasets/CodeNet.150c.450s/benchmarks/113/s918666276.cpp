#include <iostream>
using namespace std;
int a[100000]={0};
int main(){
	int i=0 , n;
	while(1){
		cin>> n;
		if (!n) break;
		a[i++]=n;
	}
	for(int j=0 ; a[j]!=0 ; j++){
		cout << "Case "<< j+1 << ":" << " " << a[j] << endl;
	}
	return 0;
}