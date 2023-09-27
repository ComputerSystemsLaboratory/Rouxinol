#include "iostream"
#include "vector"
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	int i;
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (i = 0; i+1 < a.size(); i++) {
		cout << a[a.size()-i-1] << " ";
	}
	cout << a[0] << endl;
	return 0;
}