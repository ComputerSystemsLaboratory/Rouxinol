#include<iostream>
using namespace std;
int s[51];
int main(){
	int i,j,k,l;
	int a;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			for(k=0;k<10;k++){
				for(l=0;l<10;l++){
					s[i+j+k+l]++;
				}
			}
		}
	}
	while(cin>>a){
		cout<<s[a]<<endl;
	}
	return 0;
}