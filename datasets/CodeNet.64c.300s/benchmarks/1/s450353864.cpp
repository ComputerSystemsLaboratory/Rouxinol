#include <iostream>

using namespace std;
int main(){
	int n;
	int a[100001];
	bool b[100001];
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int x = a[n - 1];
	int i = -1;
	for(int j = 0; j < n - 1; j++){
		if(a[j] <= x){
			i++;
			int tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
		}
	}
	int tmp = a[i + 1];
	a[i + 1] = a[n - 1];
	a[n - 1] = tmp;
	for(int i = 0; i < n - 1; i++){
		if(a[i] == x){
			for(int j = 0; j < i; j++){
				b[j] = false;
			}
			b[i] = true;
		}else{
			b[i] = false;
		}
	}
	for(int i = 0; i < n - 1; i++){
		if(b[i]){
			cout << "[" << a[i] <<"] ";
		}else{
			cout << a[i] <<" ";
		}
	}
	cout << a[n - 1] << endl;
	return 0;
}