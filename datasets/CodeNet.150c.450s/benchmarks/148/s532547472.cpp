#include<iostream>
using namespace std;

int main(){

	int n; cin >> n;
	int ac,wa,tle,re;
	ac = wa = tle = re = 0;
	while(n--){
		string ver; cin >> ver;
		if(ver.compare("AC")==0)ac++;
		else if(ver.compare("WA")==0)wa++;
		else if(ver.compare("TLE")==0)tle++;
		else if(ver.compare("RE")==0)re++;
	}
	printf("AC x %d\n",ac);
	printf("WA x %d\n",wa);
	printf("TLE x %d\n",tle);
	printf("RE x %d\n",re);


	return 0;
}