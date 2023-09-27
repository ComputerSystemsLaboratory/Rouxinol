#include <iostream>
using namespace std;

int rt[200000];

int main(){
	ios::sync_with_stdio(false);
	int n;
	int i , j;
	int max,min;
	cin>>n;
	max=0x80000000;
	for(i=0 ; i<n ; i++){
		cin>>rt[i];
	}
	min=rt[0];
	for(i=1 ; i<n ; i++){
		if((rt[i]-min)>max){
			max=rt[i]-min;
		}
		if((rt[i])<min){
			min=rt[i];
		}
	}
	cout << max << endl;
	return 0;
}