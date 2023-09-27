#include<iostream>
using namespace std;

int h;
int data[11][5];
int cpdata[11][5];

void clear(){
	int i,j;
	for( i = 0; i < h; i++ ){
		for( j = 0; j < 5; j++ ){
			cpdata[i][j] = 0;
		}
	}
}
void copy(){
		int i,j;
	for( i = 0; i < h; i++ ){
		for( j = 0; j < 5; j++ ){
			cpdata[i][j] = data[i][j];
		}
	}
}
void dist(){
	int i,j;
	for( i = 0; i < h; i++ ){
		for( j = 0; j < 5; j++ ){
			data[i][j] = cpdata[i][j];
		}
	}
}

int main(){
	int i,j,k;
	
	while( cin >> h ){
		int ans = 0;
		bool eflag = true;
		
		if(!h)break;
		for( i = 0; i < h; i++ ){
			for( j = 0; j < 5; j++ ){
				cin >> data[i][j];
			}
		}
		
		while( eflag ){
			eflag = false;
			copy();
			//行h-1から処理をすると簡単
			//読み込みはdataから、書き込みはcpdataへ
			for( i = h-1; i >= 0; i-- ){
				for( j = 0; j < 5; j++ ){
					if( data[i][j] == 0 )
						continue;
					int l,r;
					for( k = j; k >= 0;k--){
						if( data[i][k] != data[i][j] )
							break;
					}
					l = k;
					for( k = j; k < 5;k++){
						if( data[i][k] != data[i][j] )
							break;
					}
					r = k;
					//消す
					if( r - l - 1 >= 3 ){
						ans += data[i][j];
						cpdata[i][j] = 0;
						eflag = true;
					}
				}
			}
			dist();
			clear();
			copy();
			//落とす
			for( i = h-1; i >= 0; i-- ){
				for( j = 0; j < 5; j++ ){
					for( k = i+1; k < h; k++ ){
						if( cpdata[k][j] != 0 )
							break;
					}
					if( k != i+1 ){
						cpdata[k-1][j] = cpdata[i][j];
						cpdata[i][j] = 0;
					}
				}
			}
			dist();
			clear();
		}
		cout << ans << endl;
	}
	return 0;
}