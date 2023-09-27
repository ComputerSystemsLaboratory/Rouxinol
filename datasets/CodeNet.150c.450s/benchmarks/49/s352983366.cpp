#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n;
	int data[101];
	while(cin >> n , n){
		for(int i=0;i<n;i++){
			cin >> data[i];
		}
		sort(data,data+n);
		int sum = 0;
		for(int i=1;i<n-1;i++){
			sum += data[i];
		}
		int avg = sum / (n-2);
		cout << avg << endl;
	}
}