#include<iostream>
using namespace std;
int main(){
	int n,q;
	int input;
	int a[10000];
	int counter=0;

	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	cin >> q;
	for(int i=1;i<=q;i++){
		cin >> input;
		for(int j=0;j<n;j++){
			if(input == a[j]){
				counter++;
				break;
			}
		}
	}
	cout << counter << endl;
	return 0;
}