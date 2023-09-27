#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main (){
    int n;
	while(cin>>n && n){
		vector<int> v(n);
		int ans=100000000;
		for(int i=0;i<n;i++)cin>>v[i];

		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(i!=j)ans=min(ans,abs(v[i]-v[j]));
			}
		}
		cout<<ans<<endl;
	}
}

