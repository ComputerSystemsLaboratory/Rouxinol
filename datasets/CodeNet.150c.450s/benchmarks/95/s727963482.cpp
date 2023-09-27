#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	while(cin>>n,n){
		bool exercise=true,right=false,left=false;
		string input;
		int cnt=0;
		for(int i=0;i<n;i++){
			cin>>input;
			if(input=="lu")left=true;
			else if(input=="ru")right=true;
			else if(input=="ld")left=false;
			else right=false;
			if(exercise==true&&right==true&&left==true){
				exercise=false;
				cnt++;
			}else if(exercise==false&&right==false&&left==false){
				exercise=true;
				cnt++;
			}
		}
		cout<<cnt<<endl;
	}
}