#include <iostream>
using namespace std;

int main() {
	int list[10]={};
	
	for(int i=0;i<10;i++){
		cin >> list[i];
		}
	
	for(int x=0;x<10;x++){
		for(int y=0;y<10;y++){
			
			if(list[x]>list[y]){
				int a=list[y];
				list[y]=list[x];
				list[x]=a;
			}
			
		}	
	}
	
	for(int i=0;i<3;i++){
	cout << list[i]<<endl;
	}
	
	
	return 0;
}