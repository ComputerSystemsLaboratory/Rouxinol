#include <bits/stdc++.h>
using namespace std;
#define reps(i,j,k) for(int i=j;i<k;i++)
#define rep(i,j) reps(i,0,j)
char chenge[] = {'m','c','x','i'};
char _chenge[] = {'i','x','c','m'};
int c[] = {1000,100,10,1};
	
int getNUM(string s){
	int len = s.size();
	char prev = '$';
	int ret = 0;
	rep(i,len){
		bool f = false;
		rep(j,4){
			if(s[i] == chenge[j]){
				if(prev == '$'){
					ret += c[j];
					prev = '$';
					f = true;
				}
				else{
					ret += (prev-'0')*c[j];
					prev = '$';
					f = true;
				}
			}
		}
		if(!f){
			prev = s[i];
		}
	}
	return ret;
}
string decode(int a){
	string res = "";
	int index = 0;
	while(a){
		int t = a%10;
		if(t == 0){
			;
		}
		else if(t == 1){
			res += _chenge[index];
		}
		else{
			res += _chenge[index];
			res += (t+'0');
		}
		a/=10;
		index++;
	}
	reverse(res.begin(),res.end());
	return res;
}
int main(){
	int N;
	cin >> N;
	rep(i,N){
		string a,b;
		int _a = 0;
		int _b = 0;
		cin >> a >> b;
		_a = getNUM(a);
		_b = getNUM(b);
		//cout << _a << " " << _b << "\n";
		int res = _a+_b;
		cout << decode(res) << "\n";
	}
	return 0;
}