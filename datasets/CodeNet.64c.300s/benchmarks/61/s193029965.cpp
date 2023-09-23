#include <iostream>
using namespace std;


int main()
{
	int table[101][101] = {0};
	int r,c;
	cin>>r>>c;
	for(int i = 0; i < r ; i++){
		for(int j = 0 ; j < c; j++ ){
			cin>>table[i][j];
			table[i][c] += table[i][j];
			table[r][j] += table[i][j];
		}
		table[r][c] += table[i][c];
	}
	for(int i = 0; i <= r; i++){
		for(int j=0; j <= c ; j++){
			if( j != c){
				cout<<table[i][j]<<" ";
			}else{
				cout<<table[i][j]<<endl;
			}
		}
	}
	return 0;
}