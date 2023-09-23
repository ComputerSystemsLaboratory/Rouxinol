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
ll ans=1;

int main(){
	cin>>n;
	for(int i=2;i<=n;i++){
		ans*=i;
	}
	cout<<ans<<endl;
}