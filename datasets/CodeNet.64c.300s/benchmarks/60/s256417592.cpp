#include <iostream>
#include <vector>

/*
substitute 0 for cannot through path
'x' and 'y' is point of construction
'row' is a
'column' is b
*/
/*
void cannotThroughPath(int x, int y, int row, int column){
	int v[row][column];

	if(x == 1 && y != 1){
		for(int i = 0; i < column; ++i){
			v[x-1][i] = 0;
		}
	} else if(x != 1 && y == 1){
		for(int i = 0; i < row; ++i){
			v[i][y-1] = 0;
		}
	} else if(x != 1 && y != 1){
		v[x-1][y-1] = 0;
	}
}
*/

int main(void){
	int a,b; //number of road

	while(std::cin >> a >> b){ //input road
		if(a == 0 && b == 0) //end of input
			break;

		//make matrix a x b
		int path[a+1][b+1];
		int array[a+1][b+1];

		for(int i = 0; i <= a; ++i){
			for(int j = 0; j <= b; ++j){
				path[i][j] = 0;
				array[i][j] = 0;
			}
		}
		
		int num; //number of construction
		std::cin >> num;
		
		int x, y; //point of construction
		for(int i = 0; i < num; ++i){
			std::cin >> x >> y;
			//path[x-1][y-1] = 0;
			array[x][y] = 1;
		}


		for(int i = 1; i <= a; ++i){
			for(int j = 1; j <= b; ++j){
				if(i == 1 && j == 1 && array[i][j] == 0){
					path[i][j] = 1;
				} else if(array[i][j] == 1){
					path[i][j] = 0;

				} else {
					path[i][j] = path[i-1][j] + path[i][j-1];
				}
			}
		}
		
		std::cout << path[a][b] << std::endl; //output answer
	}
	return 0;
}