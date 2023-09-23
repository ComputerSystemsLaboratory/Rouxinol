#include<iostream>
#include<string>
using namespace std;

int main()
{

	int n,k;
	while(cin>>n){
	k=0;
	for(int i=0;i<10;i++){
		for(int j=0;j<=(n-i)&&j<10;j++){
			for(int h=0;h<=(n-(i+j))&&h<10;h++){
				for(int g=0;g<=(n-(i+(j+h)))&&g<10;g++){
					if((i+j+h+g)==n){
						k++;
					}
				}
			}
		}
	}

	cout<<k<<endl;
	}
}