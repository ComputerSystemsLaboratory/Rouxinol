#include<iostream>
using namespace std;
int main(){
	int a;
	while(cin>>a){
		int b=0;
		for(int a1=0;a1<10;a1++){
			for(int a2=0;a2<10;a2++){
				for(int a3=0;a3<10;a3++){
					for(int a4=0;a4<10;a4++){
						if(a1+a2+a3+a4==a){
							b++;
						}
					}
				}
			}
		}
		cout<<b<<endl;
	}
	return 0;
}