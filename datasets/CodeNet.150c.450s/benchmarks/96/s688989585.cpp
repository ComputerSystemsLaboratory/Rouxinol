#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstring>

using namespace std;

#define INF 999999999

int main(){
	int N, i, j, pr, b, n, no[10]={1,5,3,3,3,3,3,4,3,4};
	string s;
	vector<string> c(10);
	c[0] = "a";
	c[1] = ".,!? ";
	c[2] = "abc";
	c[3] = "def";
	c[4] = "ghi";
	c[5] = "jkl";
	c[6] = "mno";
	c[7] = "pqrs";
	c[8] = "tuv";
	c[9] = "wxyz";
	
	cin >> N;
	for(i=0;i<N;i++){
		cin >> s;
		pr = 0;
		n = 0;
		//cout << s.size();
		for(j=0;j<s.size();j++){
			b = s[j] - '0';
			//cout << b;
			if(pr == b){
				n++;
			}
			else if(b==0){
				//cout << pr << n%no[pr] << endl;
				cout << c[pr][n%no[pr]];
			}
			else {
				n=0;
			}
			pr = b;
		}
		cout << endl;
	}
	return 0;
}