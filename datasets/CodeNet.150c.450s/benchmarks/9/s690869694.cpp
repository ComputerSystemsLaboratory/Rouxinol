#include<bits/stdc++.h>
using namespace std;

int main(){
	while(1){
		int n, h, m;
		string str, c;
		
		cin>>str;

		if (str == "-") break;
	
		cin>>m;
		
		for(int i = 0; i < m; i++){
			cin>>h;

			c = str;
			str = ""; 
			

			for(int j = h; j < (int) c.size(); j++) {
				str += c[j];
			}
			for(int j = 0; j < h; j++){
				str += c[j];
			}
		}
	
		cout<<str<<endl;

	}

	return 0;
}
