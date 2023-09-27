#include <iostream>
using namespace std ; 
long long  b[102][102]  , v , e ; 
int main() {
	cin >> v >> e ;  
	for(int i=1 ; i<=v ; i++) {
		for(int j=1 ; j<=v ; j++) {
			if(i==j) {
				b[i][j]=0;
			}
			else {
				b[i][j]=1e18 ;
			}
		}
	}
	for(int i= 0 ; i < e ; i++) {
		int x , y , z  ; 
		cin >> x >> y >> z ; 
		b[x+1][y+1]=z;
	}
	for(int x=1 ; x<=v ; x++) {
		for(int y=1 ; y<=v ; y++) {
			for(int z=1; z<=v ; z++) {
				b[y][z]=min(b[y][z],b[y][x]+b[x][z]);
				if(y==z) {
					if(b[y][z]<0) {
						cout << "NEGATIVE CYCLE" << endl ;
						return 0 ;  					
					}
				}
			}
		}
	}
	for(int i=1 ; i<=v ; i++) {
		for(int j=1 ; j<=v ; j++) {
			if(j != 1) {
				if(b[i][j]>2e9) {
					cout<< " INF";  
				}
				else {
					cout << " "<<b[i][j] ;
				}
			}
			else {
				if(b[i][j]>2e9) {
					cout<< "INF";  
				}
				else {
					cout << b[i][j] ;
				}				
			}
		}
		cout << endl ; 
	}
	
}
