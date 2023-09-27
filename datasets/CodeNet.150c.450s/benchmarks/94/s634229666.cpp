#include <iostream>
#include <string>
#include <cmath>
#include<iomanip>
#include<algorithm>
#include<list>
using namespace std;


int main()
{
	int n, a[101] = {0}, count = 0;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	bool flag = true;
	while(flag){
		 flag = false;
		for (int i = n - 1; i > 0; i--){
			if (a[i] < a[i - 1]){
				int tmp = a[i];
				a[i] = a[i - 1];
				a[i - 1] = tmp;
				flag = true;
				count++;
			}
		}
	}
	for (int i = 0; i < n; i++){
		if (i < n - 1){
			cout << a[i] << " ";
		}
		else{
			cout << a[i] << endl;
		}
	}
	cout << count <<endl;
	
	return 0;
}