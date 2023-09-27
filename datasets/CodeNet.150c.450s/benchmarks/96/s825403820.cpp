#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
	int n;
	string in, out;
	vector<string> trans(10);
	trans[0] = "";
	trans[1] = ".,!? ";		trans[2] = "abc";	trans[3] = "def";
	trans[4] = "ghi";		trans[5] = "jkl";	trans[6] = "mno";
	trans[7] = "pqrs";		trans[8] = "tuv";	trans[9] = "wxyz";
	cin >> n;
	for( int k=0; k<n; k++ ){
		cin >> in;
		out = "";
		int cnt=0;
		for( int i=0; i<in.length(); i++ ){
			if( in[i] == '0' ){
				if( cnt > 0 ){
//					cout << "out:trans[" << in[i-1] << "][" << cnt << "%trans[" << in[i-1] << "].length]" << endl;
					out += trans[in[i-1]-'0'][(cnt-1)%trans[in[i-1]-'0'].length()];
					cnt = 0;
				}
			}else	cnt++;
		}
		cout << out << endl;
	}
	return 0;
}