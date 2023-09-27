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
typedef long long ll;
const int inf=(1<<31)-1;
const double pi=acos(-1);

int n;
vi num(5);

int main(){
	for(int i=0;i<5;i++) cin>>num[i];
	for(int i=0;i<5;i++) num[i]*=-1;
	sort(num.begin(),num.end());
	for(int i=0;i<4;i++) cout<<num[i]*-1<<' ';
	cout<<num[4]*-1<<endl;
}