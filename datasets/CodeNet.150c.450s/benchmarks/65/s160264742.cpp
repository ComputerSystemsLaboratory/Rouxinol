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

pair<char,int> data[40];
int n;
void SelectionSort(){
	REP(i,n-1){
		int minp,mindata;
		minp = i;
		mindata = data[i].second;
		FOR(j,i+1,n){
			if(mindata>data[j].second){
				minp = j;
				mindata = data[j].second;
			}
		}
		if(data[i].second!=mindata){
			swap(data[i],data[minp]);
		}
	}
}

void BubbleSort(){
	for(int i=n-2;i>-1;i--){
		REP(j,i+1){
			if(data[j].second>data[j+1].second) {
				swap(data[j+1],data[j]);
			}
		}
	}
}

void PrintArray(){
	REP(i,n){
		cout << data[i].first << data[i].second;
		if(i!=n-1) cout << " ";
	}
	cout << endl;
}
int main(){
	string s;
	cin >> n;
	REP(i,n){
		cin >> s;
		data[i].first = s[0];
		data[i].second = stoi(s.substr(1));
	}
	pair <char,int> data2[40];
	string orderstr[10];
	string orderstr2[10];
	REP(i,n) data2[i] = data[i];
	REP(i,10) orderstr[i] = "";
	REP(i,n) orderstr[data[i].second]+=data[i].first;
	REP(i,10) orderstr2[i] = orderstr[i];

	BubbleSort();
	PrintArray();
	bool flg = true;
	REP(i,10) orderstr[i] = "";
	REP(i,n) orderstr[data[i].second]+=data[i].first;
	REP(i,10){
		if(orderstr[i]!=orderstr2[i]) {
			flg = false;
		}
	}
	cout << (flg? "Stable" : "Not stable") << endl;
	REP(i,10) orderstr[i] = orderstr2[i];

	REP(i,n) data[i] = data2[i];
	SelectionSort();
	PrintArray();
	flg = true;
	REP(i,10) orderstr[i] = "";
	REP(i,n) orderstr[data[i].second]+=data[i].first;
	REP(i,10){
		if(orderstr[i]!=orderstr2[i]) flg = false;
	}
	cout << (flg? "Stable" : "Not stable") << endl;
	
}