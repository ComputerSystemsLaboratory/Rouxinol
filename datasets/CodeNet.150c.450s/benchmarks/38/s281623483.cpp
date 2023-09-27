#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#define shosu(x) fixed<<setprecision(x)
using namespace std;
typedef pair<int,int> P;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,P> pip;
const int inf=(1<<31)-1;

int n;

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		int a,b,c;
		cin>>a>>b>>c;
		a*=a;
		b*=b;
		c*=c;
		if(a==b+c||b==c+a||c==a+b) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}