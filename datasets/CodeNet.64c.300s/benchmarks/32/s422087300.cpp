
 #include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
  
int main() {
 
	int n, a[10000];
	int MIN = 1000000;
	int MAX = -1000000;
	long long SUM = 0;

	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> a[i];
		MIN = min(MIN,a[i]);
		MAX = max(MAX,a[i]);
		SUM = SUM + a[i];
	}

	cout << MIN << " " << MAX << " " << SUM << endl;


    return 0;
} 
