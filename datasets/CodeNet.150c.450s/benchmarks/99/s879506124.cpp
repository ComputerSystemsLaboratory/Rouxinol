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
#define All(X) X.begin(),X.end()
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define pb push_back 
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

int convstr(string str){
	int rst = 0;
	int tmp = -1;
	REP(i,str.size()){
		if(str[i]=='m'){
			if(tmp!=-1) rst+=(tmp*1000);
			else rst+=1000;
			tmp = -1;
		}else if(str[i]=='c'){
			if(tmp!=-1) rst+=(tmp*100);
			else rst+=100;
			tmp = -1;
		}else if(str[i]=='x'){
			if(tmp!=-1) rst+=(tmp*10);
			else rst+=10;
			tmp = -1;
		}else if(str[i]=='i'){
			if(tmp!=-1) rst+=(tmp);
			else rst+=1;
			tmp = -1;
		}else{
			tmp = str[i] - '0';
		}
	}
	return rst;
}

string inttostring(int num){
	string str;
	stringstream ss;
	ss << num;
	return ss.str();
}

string convint(int num){
	string rst = "";
	while(num>0){
		if(num>=1000){
			if(num/1000==1) rst+='m';
			else{ rst+=inttostring(num/1000); rst+='m';}
			num %= 1000;
		}else if(num>=100){
			if(num/100==1) rst+='c';
			else{ rst+=inttostring(num/100); rst+='c';}
			num %= 100;
		}else if(num>=10){
			if(num/10==1) rst+='x';
			else{ rst+=inttostring(num/10); rst+='x';}
			num %= 10;
		}else{
			if(num==1) rst += 'i';
			else {rst+=inttostring(num); rst+='i';};
			num = 0;
		}
	}
	return rst;
}
int main(){
	int n;
	cin >> n;
	REP(i,n){
		string s1,s2;
		cin >> s1 >> s2;
		//cout << convstr(s1) <<" " << convstr(s2) << endl;
		cout << convint(convstr(s1)+convstr(s2)) << endl;
	}
}