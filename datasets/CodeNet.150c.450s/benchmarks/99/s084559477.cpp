#include<iostream>
#include<vector>
#include<queue>
#include<cstdlib>

using namespace std;

bool isNum(char c){
	int N[] = {'2','3','4','5','6','7','8','9'};
	for (int i = 0; i < 8; i++){
		if (c == N[i]) return true;
	}
	return false;
}

int MCXItoi(string str){
		int ans = 0;
		int tmp1 = 1;
		bool flag = false;
		for (int i = 0; i < str.size(); i++){
			if (flag) tmp1 = 1;

			if (isNum(str[i])){
				tmp1 *= (int)str[i] - 48;
				flag = false;
			}else{
				if (str[i] == 'm'){
					tmp1 *= 1000;
				}else if (str[i] == 'c'){
					tmp1 *= 100;
				}else if (str[i] == 'x'){
					tmp1 *= 10;
				}else if (str[i] == 'i'){
					tmp1 *= 1;
				}
				ans += tmp1;
				flag = true;
			}	
		}
	return ans;		
}
int main(){
	int n; cin >> n;
	for (int i = 0; i < n; i++){
		int  ans = 0;
		string str[2]; cin >> str[0] >> str[1];
		for (int s = 0; s < 2; s++){
			 ans += MCXItoi(str[s]);	
		}
		int keta = 1000;
		char C[] = {'m','c','x','i'};
		for (int i = 0; i < 4; i++){
			if (ans / keta != 0){
				if ((ans % (keta * 10)) / keta == 1){
				cout << C[i];
				}else if ((ans % (keta * 10)) / keta){
				cout << (ans % (keta * 10)) / keta;
				cout << C[i];
				}
			}
			keta /= 10;
		}
		cout << endl;
	}
return 0;
}