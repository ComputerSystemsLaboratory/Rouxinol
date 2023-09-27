#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;
int henkan(char s){
	switch(s){
		case '0':
		return 0;
		case '1':
		return 1;
		case '2':
		return 2;
		case '3':
		return 3;
		case '4':
		return 4;
		case '5':
		return 5;
		case '6':
		return 6;
		case '7':
		return 7;
		case '8':
		return 8;
		case '9':
		return 9;
	}
	return 0;
}

int main(){
int a,b,c,d,i,j,k,l;
string s;
bool f;
vector<int> v,vi;
	while(1){
		cin >> a >> l;
		if(l == 0)break;
		i = 0;
		f = true;
		vi.clear();
		vi.push_back(a);
		while(1){
		v.clear();
		b = c = 0;
		s = to_string(a);
		for(k = l - 1;k >= 0;k--){
			if(s.size() >= k){
				v.push_back(henkan(s[k]));
			}
			else if(s.size() < k){
				v.push_back(0);
			}
//			cout << v[l - k - 1] << " ";
		}	
//		cout << endl;
		sort(v.begin(),v.end());
		for(k = 0;k < l;k++){
			b += v[k] * pow(10,k);
		}
		sort(v.begin(),v.end(),greater<int>());
		for(k = 0;k < l;k++){
			c += v[l - k - 1] * pow(10,l-k-1);
		}
		d = b - c;
//		cout << b << " " << c << " " << d <<endl;
		for(j = 0;j < vi.size();j++){
			if(vi[j] == d){
				f = false;
				break;
			}
		}
		if(f == false){
			cout << j << " " << d << " " << i - j + 1 <<endl;
			break;
		}
		vi.push_back(d);
		a = d;
		i++;
		}
	}
return 0;
}