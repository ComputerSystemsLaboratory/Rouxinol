#include <bits/stdc++.h>
using namespace std;

#define pb         push_back

const int INF = 100000000;

int calc_mcxi(string input);
string get_mcxi(int val);
char mcxi_ch[4] = {'i', 'x', 'c', 'm'};

int main(void) {
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		string t1, t2;
		cin >> t1 >> t2;

		int num1 = calc_mcxi(t1);
		int num2 = calc_mcxi(t2);

		//cout << num1 << endl;
		//cout << num2 << endl;
		//cout << num1 + num2 << endl;
		cout << get_mcxi(num1 + num2) << endl;
	}
	
	return 0;
}

int calc_mcxi(string input){
	int ret = 0;

	int mcxi = 0;
	int coe = 1;
	for(int i=0; i<input.size(); i++){
		if(input[i] == 'm')	{mcxi = 1000; ret += coe*mcxi; coe = 1;}
		if(input[i] == 'c')	{mcxi = 100;  ret += coe*mcxi; coe = 1;}
		if(input[i] == 'x')	{mcxi = 10;   ret += coe*mcxi; coe = 1;}
		if(input[i] == 'i')	{mcxi = 1;    ret += coe*mcxi; coe = 1;}

		if(input[i] >= '2' && input[i] <= '9') coe = input[i] - '0';
		//cout << "coe:" << coe << " ret:" << ret << endl;
	}

	return ret;
}

string get_mcxi(int val){
	string ret;
	vector<int> dig(4, 0);

	int i = 0;
	while(val){
		dig[i] = val % 10;
		val /= 10;
		i++;
	}

	for(int i=3; i>=0; i--){
		if(dig[i] >= 1){
			if(dig[i] >= 2){
				ret += to_string(dig[i]);
			}
			ret += mcxi_ch[i];
		}
	}

	return ret;
}