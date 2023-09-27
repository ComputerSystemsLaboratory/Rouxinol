#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <queue>
#include <algorithm>
#define shosu(x) fixed<<setprecision(x)
using namespace std;
typedef pair<int,int> P;

int n;
vector<int> ans;

int main(){
	cin>>n;
	cout<<n<<':';
	for(int i=2;i*i<=n;i++){
		for(;n%i==0;){
			ans.push_back(i);
			n/=i;
		}
	}
	if(n!=1) ans.push_back(n);
	int tmp=ans.size();
	for(int i=0;i<tmp;i++){
		cout<<' '<<ans[i];
	}
	cout<<endl;
}