#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <stack>
#include <set>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
	vector<int> v(5000);
	int n , sum=0 , max=-2000000000;
	while(cin>>n,n){
		sum=0;
		max=-2000000000;
		for(int i=0;i<n;++i){
			cin >> v[i];
		}
		for(int i=n;i>=0;--i){
			for(int j=i;j<n;++j){
			sum+=v[j];
			if(sum>max) max=sum;
			}
			sum=0;
		}
		cout << max << endl;
	}
	return 0; 
}