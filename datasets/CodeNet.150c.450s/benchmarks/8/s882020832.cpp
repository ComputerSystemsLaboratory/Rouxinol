#include <iostream>
#include <string>
using namespace std;

string check(int num);

int main(){
	int n,c = 0,d = 0;
	string a,b;
	cin >> n;
	
	for(int i = 0;i < n;i++){
		cin >> a >> b;
		if(a > b){
			c += 3;
		}
		else if(b > a){
			d += 3;
		}
		else{
			c++;
			d++;
		}
	}
		cout << c << ' ' << d << "\n";
	
	return 0;
}