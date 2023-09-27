#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;

int main(){
	char a[10],b[10],c[10];
	int n, m;
	int A, B,C;
	vector<int> X;
	while (1){
		cin >> n >> m;
		if (n == 0 && m == 0){
			break;
		}
		X.push_back(n);
		while (1){
			int x = 0;
			for (size_t i = 0; i < 10; i++)
			{
				a[i] = 0;
				b[i] = 0;
				c[i] = 0;
			}
			while (n){
				c[x] = n % 10;
				n /= 10;
				x++;
			}
			sort(c, c + m);
			for (size_t i = 0; i < m; i++)
			{
				a[i] = c[i];
				b[m - i - 1] = c[i];
			}
			A = 0;
			B = 0;
			for (size_t i = 0; i < m; i++)
			{
				A *= 10;
				A += a[i];
				B *= 10;
				B += b[i];
			}
			auto i=find(X.begin(),X.end(),B - A);
			if (i != X.end()){
				cout <<i-X.begin()<< " " << *i << " " << X.end() - i<< endl;
				break;
			}
			X.push_back( B - A);
			n = B - A;
		}
		X.clear();
	}
}