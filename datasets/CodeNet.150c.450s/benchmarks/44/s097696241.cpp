#include<iostream>
using namespace std;
int main(){
	int a[4]={0},b[4]={0},hi,br;
	while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>b[0]>>b[1]>>b[2]>>b[3]){
		hi=0;
		br=0;
		for(int i=0;i<4;i++){
			if(a[i]==b[i]){
				hi++;
			}
		}
		for(int i=0;i<4;i++){
			for(int n=0;n<4;n++){
				if(i!=n&&a[i]==b[n]){
					br++;
				}
			}
		}
		cout<<hi<<" "<<br<<endl;
	}
}