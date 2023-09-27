#include <iostream>
using namespace std;

int main(){
	int n, a, b;
	while (true)
	{
		int point_a = 0, point_b = 0;
		cin >> n;
		if (cin.eof()||n==0) { break; }
		for(int i =0;i<n;i++){
			cin >> a >> b;
			if(a==b){
				point_a += a;
				point_b += b;
			}
			else if (a>b){
				point_a += a + b;
			}
			else {
				point_b += a + b;
			}
		}
		cout << point_a << " " << point_b << endl;
	}
}