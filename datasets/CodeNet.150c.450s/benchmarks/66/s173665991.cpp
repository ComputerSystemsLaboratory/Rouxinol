#include <iostream>
#include <string>
using namespace std;
int main(){
	int N,M;
	int frag = 0;
	string U[256];
	string T; 
	cin >> N;
	for(int i = 0;i<N;i++){
		cin >> U[i];
	}
	cin >> M;
	for(int j=0;j<M;j++){
		cin >>T;
		for(int i = 0;i<N;i++){
			if(T==U[i]){
				frag +=1;
				
				if(frag%2==0){
					cout << "Closed by "<< T << endl;
				}
				
				else{
					cout << "Opened by " << T <<endl;
				}
				
				break;
			}
			if(i==N-1){
				cout << "Unknown " << T << endl;
			}
		}
	}


	return 0;
}