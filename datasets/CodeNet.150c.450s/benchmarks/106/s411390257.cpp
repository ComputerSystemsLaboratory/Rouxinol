#include<iostream>

using namespace std;

int main(){
	int a, b, c,ans,q;
	int count = 0;

	cin >> a >> b >> c;
	
	for (int i = 1; i<=c; ++i){
		if (c%i==0){
			for (int j = 0;a+j<=b;++j){
				ans = a + j;
				if (i==ans){
					count = count + 1;
				}
			}
			
		}
	}
	cout << count<<endl;
	cin >> q;
}
