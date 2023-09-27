#include <algorithm>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>
#include <sstream>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

using namespace std;
typedef long long int ll;
#define MAX_N 86401 //60*60*24
ll field[MAX_N];

void init(){
	rep(i,MAX_N){
		field[i] = 0;
	}
}

int stringToIntTime(string str){
	int hour,minutes,second;
	hour = stoi(str.substr(0,2));	//hh:mm:ss
	minutes = stoi(str.substr(3,2));
	second = stoi(str.substr(6,2));
	return 60*60*hour + 60*minutes + second;
}

int main()
{
	int n;
	cin>>n;
	while( n!=0){
		init();
		for(int i = 0; i < n; i++){
			string start,end;
			cin>>start>>end;
			field[stringToIntTime(start)]++;
			field[stringToIntTime(end)]--;
		}
		ll ans = 0;
		for(int i = 0; i < MAX_N-1; i++){
			field[i+1] += field[i];
			ans = max(ans,field[i+1]);
		}
		cout<<ans<<endl;
		cin>>n;
	}
	
	return 0;
}

