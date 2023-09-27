#include <iostream>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;
int main(void){
	int a,b,q,i,ii,j,R1,R2=0;int len;
	string p,str,command,r,Reverse;
	while(cin>>str,cin>>q){
		for(i = 0;i < q;i++){
			cin>>command;
			if(command == "print"){
				cin>>a>>b;
				cout<<str.substr(a,b-a+1)<<endl;
			}
			if(command == "reverse"){
				cin>>a>>b;
				string A;
				A = str.substr(a,b-a+1);
				reverse(A.begin(),A.end());
				/*
				len = str.substr(a,b).length();
				for(R1 = len ; 0<R1;R1--){
					r[R2] += str.substr(a,b)[R1];
					R2++;
				}
				R2 = 0;
				str = str.substr(0,a) + r + str.substr(b,str.length());
				/*
				Reverse = str.substr(a,b);
				for(R1=0,R2=str.substr(a,b).size();R1<str.substr(a,b).size(),R2>0;R1++,R2--){
					r+= Reverse[R2] ;
				}*/
				//str = str.substr(0,a) + str.substr(a,b-a+1) + str.substr(b,str.substr(a,b).length());
				str.replace(a,b-a+1,A);

			}
			
			if(command == "replace"){
				cin>>a>>b>>p;		
				str.replace(a,b-a+1,p);
			
			}
		}
	}
	return 0;
}