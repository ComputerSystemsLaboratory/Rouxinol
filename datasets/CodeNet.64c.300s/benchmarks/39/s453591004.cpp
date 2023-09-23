#include<iostream>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define pi 3.141592653589793283462
int main(){
    int c;
	int d=0;
	while (cin>>c)
	{
		for(int i=0;i<=9;i++){
			for(int j=0;j<=9;j++){
				for(int k=0;k<=9;k++){
					for(int l=0;l<=9;l++){
					   if(i+j+k+l==c)
						   d++;
					}
				}
			}
		}
		cout<<d<<endl;
		d=0;
	}
	return 0;
}