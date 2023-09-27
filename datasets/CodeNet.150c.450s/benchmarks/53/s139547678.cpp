#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int n;
	vector<int>p;
	cin >> n;
	int m = n;
	for (int i = 2; i*i < m; i++){
		while (1){
			if (n % i == 0){
				p.push_back(i);
				n = n / i;
			}
			else break;
		}
	}
		if (n != 1)p.push_back(n);
		cout << m << ":";
		for (int i = 0; i < p.size(); i++){
			cout <<" "<< p[i];
		}
		cout << endl;
}