#include <iostream>
#include <vector>

class Point{
	private :
	int x; //X point of grid
	int y; //Y point of grid
	int path; //number of path
	bool roadWork; //roadWork flag

	public : 
	Point() : x(), y(), path(), roadWork() {}
	// ~Point() = default;
	void setX(int i) { x = i; }
	void setY(int i) { y = i; }
	void setPath(int i) { path = i; }
	void setRoadWork(bool b) { roadWork = b; }
	int getX() { return x; }
	int getY() { return y; }
	int getPath() { return path; }
	int getRoadWork() { return roadWork; }
};

int main(void){
	int a; //number of road from south to north
	int b; //number of road from east to west 

	while(std::cin >> a >> b){ //input number of road
		if(a == 0 && b == 0){ //end input
			break;
		}

		size_t num; //number of dataset
		std::cin >> num; //input number of dataset

		std::vector<Point> pointList; //array of point
		std::vector<Point> rwpList; //array of road work point

		for(size_t i = 0; i < num; ++i){ //input grid of road work point
			int tmp1, tmp2;
			std::cin >> tmp1 >> tmp2;
			Point p;
			p.setX(tmp1);
			p.setY(tmp2);
			rwpList.push_back(p);
		}

		for(size_t i = 0; i < a; ++i){
			for(size_t j = 0; j < b; ++j){
				Point p;
				p.setX(i + 1);
				p.setY(j + 1);

				for(size_t k = 0; k < rwpList.size(); ++k){
					if(p.getX() == rwpList.at(k).getX() && p.getY() == rwpList.at(k).getY()){
						p.setRoadWork(true);
					}
				}

				if(p.getRoadWork() == true){
					p.setPath(0);
				}else{
					if(i == 0 && j == 0){
						p.setPath(1);
					}else if(i == 0 && j != 0){
						p.setPath(pointList.back().getPath()); //add number of path at west point 
					}else if(j == 0 && i != 0){
						p.setPath(pointList.at(pointList.size() - b).getPath()); //add number of path at south point 
					}else{
						p.setPath(pointList.back().getPath() + pointList.at(pointList.size() - b).getPath()); //add number of path at west and south point 
					}
				}
				pointList.push_back(p);
			}
		}

		std::cout << pointList.back().getPath() << std::endl;
	}

	return 0;
}