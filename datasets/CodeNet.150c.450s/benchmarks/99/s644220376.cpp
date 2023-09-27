#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <functional>
#include <set>
#include <sstream>
#include <map>
#include <queue>

using namespace std;
 
const double eps=1e-10;

const int dy[]={-1,-1,0,1,1, 1, 0,-1};
const int dx[]={ 0, 1,1,1,0,-1,-1,-1};

int dec(string s)
{
	int coe=1,res=0;
	for(int i=0;i<s.size();i++){
		if('0'<=s[i] && s[i]<='9') coe=s[i]-'0';
		else{
			switch(s[i]){
				case 'm': res+=1000*coe; break;
				case 'c': res+=100*coe; break;
				case 'x': res+=10*coe; break;
				case 'i': res+=coe; break;
			}
			coe=1;
		}
	}
	return res;
}

string enc(int x)
{
	stringstream s;

	int coe=x/1000;
	if(coe==1) s<<"m";
	else if(coe>1) s<<coe<<"m";

	x%=1000;
	coe=x/100;
	if(coe==1) s<<"c";
	else if(coe>1) s<<coe<<"c";

	x%=100;
	coe=x/10;
	if(coe==1) s<<"x";
	else if(coe>1) s<<coe<<"x";

	x%=10;
	coe=x;
	if(coe==1) s<<"i";
	else if(coe>1) s<<coe<<"i";

	return s.str();
}

int main()
{
	int n;
	cin>>n;

	for(int i=0;i<n;i++){
		string s1,s2;
		cin>>s1>>s2;
		cout<<enc(dec(s1)+dec(s2))<<endl;
	}

	return 0;
}