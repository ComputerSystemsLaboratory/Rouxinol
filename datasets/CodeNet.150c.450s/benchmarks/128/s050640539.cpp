#include<iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
#include <sstream>
typedef long long ll;
int main(){
string s;
	cin>>s;
	for (int i = s.length()-1; i >= 0; --i) {
		cout<<s[i];
	}
	cout<<endl;
}