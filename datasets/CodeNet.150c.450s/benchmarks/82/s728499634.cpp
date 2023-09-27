#include <iostream>
using namespace std;


int main(){
	int label[7];
	cin >> label[1] >> label[2] >> label[3] >> label[4] >> label[5] >> label[6];
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		int a = 0,b = 0,ans;
		cin >> a >> b;
		for(int j = 1;j <= 6;j++){
			if(label[j] == a) a = j;
			else if(label[j] == b) b = j;
		}
		if(a == 1){
			if(b == 2)ans = 3;
			else if(b == 3)ans = 5;
			else if(b == 5)ans = 4;
			else if(b == 4)ans = 2;
		}
		else if(a == 2){
			if(b == 1)ans = 4;
			else if(b == 4)ans = 6;
			else if(b == 6)ans = 3;
			else if(b == 3)ans = 1;
		}
		else if(a == 3){
			if(b == 1)ans = 2;
			else if(b == 2)ans = 6;
			else if(b == 6)ans = 5;
			else if(b == 5)ans = 1;
		}
		else if(a == 4){
			if(b == 1)ans = 5;
			else if(b == 5)ans = 6;
			else if(b == 6)ans = 2;
			else if(b == 2)ans = 1;
		}
		else if(a == 5){
			if(b == 1)ans = 3;
			else if(b == 3)ans = 6;
			else if(b == 6)ans = 4;
			else if(b == 4)ans = 1;
		}
		else if(a == 6){
			if(b == 2)ans = 4;
			else if(b == 4)ans = 5;
			else if(b == 5)ans = 3;
			else if(b == 3)ans = 2;
		}
		cout << label[ans] << "\n";
	}
	
	return 0;
}