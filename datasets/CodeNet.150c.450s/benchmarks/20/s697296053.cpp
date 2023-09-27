#include<stdio.h>
#include<string.h>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<ctype.h>
#include<stack>
#include<math.h>
#include <string>
#include<algorithm>
#include<iomanip>
#define _for(i,a,b) for(int i = (a);i < (b);i++)
#define mset(x) memset(x,0,sizeof(x));
using namespace std;

int main() {
	long long int s,H,M,S;
	cin>>s;
	S = s % 60;
	M = s / 60 % 60;
	H = s / 3600; 
	cout<<H<<":"<<M<<":"<<S<<endl;
	return 0;
}
