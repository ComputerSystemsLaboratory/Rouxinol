#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <math.h>
#include <stdlib.h>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		if(n==0) break;
		string s[n][2];
		for(int i=0;i<n;i++){
			cin>>s[i][0]>>s[i][1];
		}
		int t;
		cin>>t;
		for(int i=0;i<t;i++){
			string a;
			cin>>a;
			for(int j=0;j<n;j++){
				if(s[j][0]==a){
					cout<<s[j][1];
					goto end;
				}
			}
			cout<<a;
			end:;
		}
		cout<<endl;
	}
    return 0;
}