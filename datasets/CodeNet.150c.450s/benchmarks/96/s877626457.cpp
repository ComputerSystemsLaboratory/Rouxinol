#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
#include<ctime>
#include<cstring>
#include<iomanip>

#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define dump(a) (cerr << #a << "=" << (a) << endl)
#define DUMP(list) cout << "{"; for(auto nth : list){ cout << nth << " ";}cout << "}" << endl;

using namespace std;

int main(){

	string table[10] = { "#", ".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

	int n;

	cin >> n;

	for(int i=0;i<n;i++){
		string str;
		int count=0;
		cin >> str;

		for(int k=0;k<str.length();k++){
			if(str[k] == str[k+1]){
				count++;
			}else{
				string str2 = table[(str[k]-'0')];
				char word = str2[ count % (str2.length()) ];
				if(word != '#'){ cout << word; }
				count=0;
			}
		}

		cout << endl;
	}


}