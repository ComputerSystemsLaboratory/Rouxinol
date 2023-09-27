#include <iostream>
#include <vector>

const int Max_a = 17; // 1 <= a <= 16
const int Max_b = 17; // 1 <= b <= 16
bool memo[Max_a][Max_b]; // memo for dp

void format(){
	for(u_int i = 0; i < Max_a; ++i){
        for(u_int j = 0; j < Max_b; ++j){
            if(i == 0 || j == 0){ // not use memo[0][] and memo[][0]
                memo[i][j] = true;
            }
            else{
                memo[i][j] = false;
            }
        }
    }
}

int calcRoad(u_int x, u_int y){
	// initialization
	if(x == 1 && y == 1){
		return 1;
	}
	else if(x == 0 || y == 0){
		return 0;
	}
	else{
		int num;
		if(memo[x - 1][y] && memo[x][y - 1]){ // if it was caliculated
			return 0;
		}
		else if(memo[x - 1][y]){
			num = calcRoad(x, y - 1);
			return num;
		}
		else if(memo[x][y - 1]){
			num = calcRoad(x - 1, y);
			return num;
		}
		else{
			num = calcRoad(x - 1, y) + calcRoad(x, y - 1);
			return num;
		}
	}
}
   
int main(){
    u_int a;    // width
    u_int b;    // height
    while(std::cin >> a >> b){
        if(a == 0 && b == 0){
            break;
        }
       
        // construction
		format();
        u_int n;
        std::cin >> n;
        for(u_int i = 0; i < n; ++i){
            u_int x, y;
            std::cin >> x >> y;
            memo[x][y] = true;
        }
		// solve by dp
        std::cout << calcRoad(a, b) << std::endl;
    }
    return 0;
}