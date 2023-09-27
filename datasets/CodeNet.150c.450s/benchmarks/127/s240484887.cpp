#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main(){
	long m;
	scanf(" %ld", &m);
	for(long i=0; i<m; ++i){
		string s;
		string list[5000];
		long count=0;
		
		cin >> s;
		long size=s.size();
		
		for(int j=1; j<=size-1; ++j){
			string a=s.substr(0,j)	;
			string b=s.substr(j,size-j);
			
			for(int p=0; p<2; ++p){
				if(p) reverse(a.begin(), a.end());
				
				for(int q=0; q<2; ++q){
					reverse(b.begin(), b.end());
					
					for(int r=0; r<2; ++r){
						string tmp="";
						if(r==0) tmp+=b+a;
						else tmp+=a+b;
						//cout << tmp <<endl;
						
						bool flag=true;
						for(long x=0; x<count; ++x){
							if(tmp==list[x]){
								flag=false;
								break;	
							}	
						}
						
						if(flag) list[count++]=tmp;
							
					}
				}
				
			}
			
		}
		
		//for(long x=0; x<count; ++x) cout << " " << list[x] << endl;
		
		printf("%ld\n", count);
	}
	return 0;
}