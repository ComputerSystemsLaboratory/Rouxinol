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
 
using namespace std;
 
const double eps=1e-10;
 
int main()
{
	int m,d;

	int dd[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	for(int i=1;i<=12;i++) dd[i]+=dd[i-1];

	string str[]={
		"Monday",
		"Tuesday",
		"Wednesday",
		"Thursday",
		"Friday",
		"Saturday",
		"Sunday"
	};

	while(cin>>m>>d,m){
		int day=(d+dd[m-1]+2)%7;
		cout<<str[day]<<endl;
	}

	return 0;
}