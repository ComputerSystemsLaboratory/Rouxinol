#include <iostream>
#include <vector>

class Point{
	int count;
	bool cross; //true:pass false:not pass
public:
	Point() : count(),cross(true){ } //constructor
	void not_cross(){ cross = false; }
	bool getCross(){ return cross; }
	void setCount(int num){ count=num; }
	int getCount(){ return count;}
	~Point() = default;
};

int main(){
	int a,b; //a:east-west b:north-south
	int n; //number of crossing
	int x,y; //not pass crossing
	
	while(std::cin >> a >> b){
		//input end
		if(a == 0 && b == 0){
			break;
		}
		
		std::vector< std::vector<Point> > road (a+1, std::vector<Point>(b+1) );
		//initialization
		for(int i=0; i<=a; ++i){
			for(int j=0; j<=b; ++j){
				Point p;
				road[i][j] = p;
			}
		}
		//construction
		std::cin >> n;
		for(int i=0; i<n; ++i){
			std::cin >> x >> y;
			road[x][y].not_cross(); //not pass
		}
		
		//search road
		for(int i=1; i<=a; ++i){
			for(int j=1; j<=b; ++j){
				if(i==1 && j==1){
					road[i][j].setCount(1); //start
				}
				//cross = true
				else if(road[i][j].getCross()){
					int num = road[i-1][j].getCount()+road[i][j-1].getCount();
					road[i][j].setCount(num);
				}
				//cross = false
				else{
					road[i][j].setCount(0);
				}
			}
		}
		//output
		std::cout << road[a][b].getCount() << std::endl;
	}
}