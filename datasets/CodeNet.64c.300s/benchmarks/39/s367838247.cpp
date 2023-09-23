#include<iostream>
using namespace std;
int main(){
	int n=0,kaisu=0;
	while(cin>>n){
		for(int a=0;a<10;a++){
			for(int b=0;b<10;b++){
				for(int c=0;c<10;c++){
					for(int d=0;d<10;d++){
						if(a+b+c+d==n){
							kaisu++;
						}
					}
				}
			}
		}
		cout<<kaisu<<endl;
		kaisu=0;
	}
}