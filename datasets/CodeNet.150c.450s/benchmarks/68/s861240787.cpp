#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	while(1){
		int n;
		vector<int> a;
		
		cin>>n; 
		if(n == 0)
			break;
			
		for(int i=0; i<n; i++){
			int x; 
			cin>>x; 
			a.push_back(x);
		}
		sort(a.begin(),a.end());
		
		int diff=1000000; 
		for(int i=0; i<n-1; i++){
			if(a[i+1] - a[i] < diff){
				diff=a[i+1] - a[i];
			}
			if(diff == 0)
				break;
		}
		cout<<diff<<endl;
	}
	return 0;
}