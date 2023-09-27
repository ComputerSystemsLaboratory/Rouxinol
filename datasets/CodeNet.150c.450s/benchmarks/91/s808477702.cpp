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
vector<bool> vec;

int main(){
	while(cin>>n){
		int ans=0;
		vec=vector<bool>(n+1,1);
		for(int i=2;i<=n;i++){
			if(vec[i]){
				ans++;
				for(int j=i;j<=n;j+=i) vec[j]=0;
			}
		}
		cout<<ans<<endl;
	}
}