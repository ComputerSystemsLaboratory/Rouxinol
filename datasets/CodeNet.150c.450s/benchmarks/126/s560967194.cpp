#include <iostream>
#include <vector>

class Road{
private:
	int col,row,close_num, goal_num;
	std::vector<int> close_x;
	std::vector<int> close_y;
	
public:
	Road(int a, int b, int n){
		col = a;
		row = b;
		close_num = n;
		close_x.resize(n);
		close_y.resize(n);
		goal_num = 0;
	}
	
	void inPoint(){
		for(int i=0; i<close_num; ++i){
			std::cin >> close_x[i] >> close_y[i];
		}
	}
	
	void go_road(int now_x,int now_y){
		
		if(now_x == col && now_y == row){
			++goal_num;
			return;
		}
		
		if(now_x+1 <= col)
			if(isGo(now_x+1, now_y)){
				go_road(now_x+1, now_y);
			}
		
		if(now_y+1 <= row)
			if(isGo(now_x, now_y+1)){
				go_road(now_x, now_y+1);
			}
			
	}
	
	int isGo(int x, int y){
		for(int i=0; i<close_num; ++i){
			if(x == close_x[i] && y == close_y[i])
				return 0;
		}
		return 1;
	}
	
	void showGoal(){
		std::cout << goal_num << std::endl;
	}
};

int main(){
	int a,b;

	while(std::cin >> a >> b){
		if(a == 0 && b == 0) break;
		
		int n;
		std::cin >> n;
		
		Road road(a,b,n);
		road.inPoint();
		road.go_road(1,1);
		road.showGoal();
	}
	
	return 0;

}