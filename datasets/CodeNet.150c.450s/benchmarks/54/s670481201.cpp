#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <cmath>
#include <string>
#include <sstream>
#include <iomanip>
#include <complex>
using namespace std;
 
#define ll long long
#define vvi vector< vector<int> >
#define vi vector<int>
#define All(X) X.begin(),X.end()
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define pb push_back
#define pii pair<int,int>
#define mp make_pair
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

string upper(string str){
    for(int i = 0;i < str.size();i++){
		if ('a' <= str[i] && str[i] <= 'z')
    	{
    		str[i] = (str[i] - 'a' + 'A');
    	}
    }
    return str;
}

int main(){
	string W = "";
	string S = "";
	string T = "";
	int j = 0;
    int b = 0;
    int i = 0;
	cin >> W;
	getline(cin,T);
	do{
		S += T;
		getline(cin,T);
		T += " ";
	}while(T != "END_OF_TEXT ");
	T = "";
	S = upper(S);
	W = upper(W);
	while(i < S.size()){
			while(S[i] != ' '){
				T += S[i];
				i++;
			}
			if(T == W){
				b++;
			}
			T = "";
			i++;
		}
	cout << b << endl;
	return 0;
}