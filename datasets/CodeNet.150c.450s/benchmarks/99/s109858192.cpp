#include <iostream>
#include <string>
using namespace std;

int main() {
	int n,a,s1res,s2res,result;
	string s1,s2,s;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> s1 >> s2;
		s1res = s2res = result = 0;
		for(int j = 0;j < s1.size();j++){
			a = 1;
			if(s1[j] == '2'){
			a = 2;
			j++;
			}
			else if(s1[j] == '3'){
			a = 3;
			j++;
			}
			else if(s1[j] == '4'){
			a = 4;
			j++;
			}
			else if(s1[j] == '5'){
			a = 5;
			j++;
			}
			else if(s1[j] == '6'){
			a = 6;
			j++;
			}
			else if(s1[j] == '7'){
			a = 7;
			j++;
			}
			else if(s1[j] == '8'){
			a = 8;
			j++;
			}
			else if(s1[j] == '9'){
			a = 9;
			j++;
			}
			if(s1[j] == 'm'){
			s1res += a * 1000;
			}
			if(s1[j] == 'c'){
			s1res += a * 100;
			}
			if(s1[j] == 'x'){
			s1res += a * 10;
			}
			if(s1[j] == 'i'){
			s1res += a;
			}
		}
		for(int j = 0;j < s2.size();j++){
			a = 1;
			if(s2[j] == '2'){
			a = 2;
			j++;
			}
			else if(s2[j] == '3'){
			a = 3;
			j++;
			}
			else if(s2[j] == '4'){
			a = 4;
			j++;
			}
			else if(s2[j] == '5'){
			a = 5;
			j++;
			}
			else if(s2[j] == '6'){
			a = 6;
			j++;
			}
			else if(s2[j] == '7'){
			a = 7;
			j++;
			}
			else if(s2[j] == '8'){
			a = 8;
			j++;
			}
			else if(s2[j] == '9'){
			a = 9;
			j++;
			}
			if(s2[j] == 'm'){
			s2res += a * 1000;
			}
			if(s2[j] == 'c'){
			s2res += a * 100;
			}
			if(s2[j] == 'x'){
			s2res += a * 10;
			}
			if(s2[j] == 'i'){
			s2res += a;
			}
		}
		result = s1res + s2res;
		if(result >= 1000){
			a = result;
			a /= 1000;
			if(a == 1)cout << "m";
			else cout << a << "m";
			result = result - (a * 1000);
		}
		if(result >= 100){
			a = result;
			a /= 100;
			if(a == 1)cout << "c";
			else cout << a << "c";
			result = result - (a * 100);
		}
		if(result >= 10){
			a = result;
			a /= 10;
			if(a == 1)cout << "x";
			else cout << a << "x";
			result = result - (a * 10);
		}
		if(result >= 1 && result < 10){
			if(result == 1)cout << "i";
			else cout << result << "i";
		}
		cout << endl;
	}
	return 0;
}