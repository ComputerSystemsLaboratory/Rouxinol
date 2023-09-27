#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
	
	int n;
	while(cin>>n){
	int count=0;
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			for(int k=0;k<10;k++){
				for(int x=0;x<10;x++){
					if(i+j+k+x==n){count++;}
				}
			}
		}
	}
		cout<<count<<endl;
	}
			
	return 0;
	}