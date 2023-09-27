#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstring>
#include<sstream>
#include<iomanip>

using namespace std;

#define INF 999999999

int mcxi_int(string s){
	int r=0, ins=1;
	for(int p=0; p<s.size(); p++){
		if(s[p]-'0'>=2 && s[p]-'0'<=9){
			ins = s[p]-'0';
		}
		else if(s[p] == 'm'){
			r += ins * 1000;
			ins = 1;
		}
		else if(s[p] == 'c'){
			r += ins * 100;
			ins = 1;
		}
		else if(s[p] == 'x'){
			r += ins * 10;
			ins = 1;
		}
		else if(s[p] == 'i'){
			r += ins;
			ins = 1;
		}
	}
	return r;
}

string int_mcxi(int i){
	string r;
	if((i/1000)%10 >= 1){
		if((i/1000)%10 >= 2){
			r += '0'+ (i/1000)%10;
		}
		r += 'm';
	}
	if((i/100)%10 >= 1){
		if((i/100)%10 >= 2){
			r += '0'+(i/100)%10;
		}
		r += 'c';
	}
	if((i/10)%10 >= 1){
		if((i/10)%10 >= 2){
			r += '0'+(i/10)%10;
		}
		r += 'x';
	}
	if((i/1)%10 >= 1){
		if((i/1)%10 >= 2){
			r += '0'+(i/1)%10;
		}
		r += 'i';
	}
	return r;
}

int main(){
	int i, j, k, n, a, b, c;
	string y, z, ans;
	cin >> n;
	for(i=0; i<n; i++){
		cin >> y >> z;
		c = mcxi_int(y) + mcxi_int(z);
		ans = int_mcxi(c);
		cout << ans << endl;
	}
	
	return 0;
}