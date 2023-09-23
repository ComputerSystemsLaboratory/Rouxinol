#include <iostream>
#include <string>
using namespace std;

int main(){
	int n, a, b, in, j;
	cin >> n;
	for(int i=0;i<n;i++){
		a = 0;
		b = 0;
		for(j=0;j<10;j++){
			cin >> in;
			if(in>a){
				a = in;
			}
			else if(in>b){
				b = in;
			}
			else{
				cout << "NO" << endl;
				break;
			}
			if (j==9){
				cout << "YES" << endl;
			}
		}
		for (int y = j + 1; y < 10; y++) { cin >> in; }
	}
	return 0;
}