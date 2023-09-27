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
	bool open=false;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>u[i];
	}
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>t[i];
		for(int j=0;j<n;j++){
			if(t[i]==u[j]&&!open){
				cout<<"Opened by "<<t[i]<<endl;
				open=true;
				break;
			}else if(t[i]==u[j]){
				cout<<"Closed by "<<t[i]<<endl;
				open=false;
				break;
			}
			if(j==n-1){
				cout<<"Unknown "<<t[i]<<endl;
			}
		}
	}
} 
