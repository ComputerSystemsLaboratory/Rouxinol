#include <iostream>
using namespace std;

int pow(int a,int b){
	int c = 1;
	for(int i = 0 ; i < b ; i++) c *= a;
	return c;
}


int get(string a){
	int ans = 0;
	for(int i = 0 ; i < a.size() ;){
		if('2' <= a[i] && a[i] <= '9'){
			ans += pow(10,string("ixcm").find(a[i+1])) * (a[i] - '0');
			i+=2;
		}else{
			ans += pow(10,string("ixcm").find(a[i]));
			i++;
		}
	}
	return ans;
}

string X(char a,int b){
	if(b == 0) return "";
	if(b == 1 ) return string(1,a);
	return string(1,b+'0') + string(1,a);
}

string to(int n){
	int A = n / 1000;
	n -= A * 1000;
	
	int B = n / 100;
	n -= B * 100;
	
	int C = n / 10;
	n -= C * 10;
	
	int D = n / 1;
	n -= D;
	
	//cout << A << " " << B << " " << C << " " << D << endl;
	return X('m',A) + X('c',B) + X('x',C) + X('i',D);
	
}

int main(){
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	while(n--){
		string a,b;
		cin >> a >> b;
		//cout << a << " " << b << " " << get(a) << " " << get(b) << endl;
		cout << to(get(a)+get(b)) << endl;
	}
}