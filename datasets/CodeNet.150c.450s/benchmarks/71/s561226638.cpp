#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	while(cin>>n){
	int count=0;
		for(int i=9; i>=0; i--){
			for(int j=9; j>=0; j--){
				for(int k=9; k>=0; k--){
					for(int l=9; l>=0; l--){
						if(i+j+k+l==n)count++;
					}
				}
			}
		
	
	}
	cout<<count<<endl;
	}
	return 0;
}