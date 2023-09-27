#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<sstream>
#include<string>

using namespace std;


int main(){

	while(1){
		int n,r;	
		cin >> n >> r;
		if(n==0&&r==0) break;
		vector<int> huda(n);
		for(int i=0;i<n;i++) huda[i]=n-i;
		
		for(int i=0;i<r;i++){
			int p,c;
			cin >> p >> c;
			p--;c--;
			for(int j=c;j>=0;j--){
				int a = huda[p+c];
				huda.erase(huda.begin()+p+c);
				huda.insert(huda.begin(),a);
			}
		}

		cout << huda[0] << endl;
	}
}