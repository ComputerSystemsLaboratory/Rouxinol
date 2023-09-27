# include<iostream>

using namespace std;
int main(){
	int n = 0;
	int a[100];
	int t[100];
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
		t[i] = a[i];
	}
	for (int it = n - 1; it >= 0; it--){
		cout << t[it] ;
		if (it != 0){
			cout << " ";
		}
	}
	cout << endl;
	return 0;
}