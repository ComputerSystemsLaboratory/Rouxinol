#include<iostream>
#include<algorithm>
#include<string>
#include<cstdlib>
#include<map>
#include<iomanip>
#include<sstream>
#include<vector>
#include<stack>
#include<math.h>
#include<queue>
#include<complex>
#include<random>
#include<ctime>
#include<set>
using namespace std;


const long long int mod=1000000007;
const long long int INF=99999999999999999;

long long int n,m;
string u[300],t[300];
string s;

int main() {
	cout << fixed << setprecision(18);
	cin>>n;
	
	while(n!=0){
		bool UP=true,RUP=false,LUP=false;
		long long int res=0;
		for(int i=0;i<n;i++){
			cin>>s;
			if(s[0]=='r'){RUP=!RUP;}
			else{LUP=!LUP;}
			if(UP==RUP&&UP==LUP){UP=!UP;res++;}
		}
		cout<<res<<endl;
		cin>>n;
	}
} 
