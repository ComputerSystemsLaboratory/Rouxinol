#include <iostream>
#include <string>

using namespace std;

int main(){


	int n;
	cin >> n;


	for(int p = 0; p < n; p++){
	string str[2];
	cin >> str[0];
	cin >> str[1];

	int a[2];
	int sum = 0;
	for(int k = 0; k < 2; k++){
		bool m = false;
		bool c = false;
		bool x = false;
		bool i = false;
		int cnt = 0;
		for(int j = 0; j < str[k].size(); j++){
			if(str[k][j] >= '2' && str[k][j] <= '9'){
				if(str[k][j+1] == 'm' && m == false && c == false && x == false && i == false){
					m = true;
					cnt += (1000*(str[k][j]-'0'));
					j++;
				}
				else if(str[k][j+1] == 'c' && c == false && x == false && i == false){
					c = true;
					cnt += (100*(str[k][j]-'0'));
					j++;
				}
				else if(str[k][j+1] == 'x' && x == false && i == false){
					x = true;
					cnt += (10*(str[k][j]-'0'));
					j++;
				}
				else if(str[k][j+1] == 'i' && i == false){
					int tmp = str[k][j] - '0';
					cnt += (tmp);
					j++;
				}
				else{
					// dame
				}
			}
			else{
				if(str[k][j] == 'm' && m == false && c == false && x == false && i == false){
					m = true;
					cnt += (1000);
				}
				else if(str[k][j] == 'c' && c == false && x == false && i == false){
					c = true;
					cnt += (100);
				}
				else if(str[k][j] == 'x' && x == false && i == false){
					x = true;
					cnt += (10);
				}
				else if(str[k][j] == 'i' && i == false){
					i = true;
					cnt += (1);
				}
				else{
					// dame
				}
			}
		}
		sum += cnt;
	}

	string form = "";
	int vv = 1000;
	while(vv!=0){
		if(vv == 1000){
			int tmp = sum / 1000;
			if(tmp != 0){
				if(tmp != 1){
					form += (tmp + '0');
				}
				form += 'm';
			}
		}
		else if(vv == 100){
			int tmp = sum / 100;
			tmp %= 10;
			if(tmp != 0){
				if(tmp != 1){
					form += (tmp + '0');
				}
				form += 'c';
			}
		}
		else if(vv == 10){
			int tmp = sum / 10;
			tmp %= 10;
			if(tmp != 0){
				if(tmp != 1){
				form += (tmp + '0');
				}
				form += 'x';
			}
		}
		else{
			int tmp = sum % 10;
			if(tmp != 0){
				if(tmp != 1){
					form += (tmp + '0');
				}
				form += 'i';
			}
		}
		vv/=10;
	}
	cout << form << endl;

	}

	
	return 0;
}