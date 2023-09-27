#include <iostream>
using namespace std;

struct square{
	int x;
	int y;
	//struct square *left;	//0
	//struct square *down;	//1
	//struct square *right;	//2
	//struct square *up;	//3
};

int main(){
	struct square data[200];
	int N, n, d;

	while( 1 ){
		int top = 0, bottom = 0, left_side = 0, right_side = 0;
		data[0].x = 0;
		data[0].y = 0;
		cin >> N;
		if( N == 0 ) break;
		for( int i = 1; i < N; i++ ){
			cin >> n >> d;
			switch( d ){
				case 0:
				//data[i]->right = *data[n];
				data[i].x = (data[n].x) - 1;
				data[i].y = data[n].y;
				break;
				case 1:
				//data[i]->up = *data[n];
				data[i].x = data[n].x;
				data[i].y = (data[n].y) - 1;
				break;
				case 2:
				//data[i]->left = *data[n];
				data[i].x = (data[n].x) + 1;
				data[i].y = data[n].y;
				break;
				case 3:
				//data[i]->down = *data[n];
				data[i].x = data[n].x;
				data[i].y = (data[n].y) + 1;
				break;
			}
			if( top < data[i].y ) top = data[i].y;
			if( bottom > data[i].y ) bottom = data[i].y;
			if( left_side > data[i].x ) left_side = data[i].x;
			if( right_side < data[i].x ) right_side = data[i].x;
		}
		bottom *= -1;
		left_side *= -1;
		cout << left_side + right_side + 1 << ' ' << top + bottom + 1 << endl;
	}
}