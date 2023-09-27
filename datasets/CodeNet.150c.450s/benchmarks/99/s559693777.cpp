#include <iostream>
#include <sstream>
#include <stack>
using namespace std;

string int2mcxi(int n){
    string s;
    char c[4] = {'m', 'c', 'x', 'i'};
    int k = 3;
    while (n > 0){
	if (n % 10){
	    if (n % 10 == 1) s = c[k] + s;
	    else {
		s = c[k] + s;
		s = (char)(n % 10 + '0') + s;
	    }
	}
	n /= 10;
	k--;
    }
    return s;
}

int mcxi2int(string s){
    int num = 0;
    stack<char> st;
    for (int j = 0; j < s.size(); j++){
	if ('2' <= s[j] && s[j] <= '9') st.push(s[j]);
	else {
	    int k;
	    if (st.empty()) k = 1;
	    else {
		k = st.top() - '0';
		st.pop();
	    }
	    
	    if (s[j] == 'm'){
		num += k * 1000;
	    }
	    else if (s[j] == 'c'){
		num += k * 100;
	    }
	    else if (s[j] == 'x'){
		num += k * 10;
	    }
	    else if (s[j] == 'i'){
		num += k * 1;
	    }
	}
    }
    
    return num;
}

int main(){
    int n;
    cin >> n;
    string s1, s2;
    for (int i = 0; i < n; i++){
	cin >> s1 >> s2;
	cout << int2mcxi(mcxi2int(s1) + mcxi2int(s2)) << endl;
    }
}