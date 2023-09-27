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
	~Point() = default;
	void setX(int i) { x = i; }
	void setY(int i) { y = i; }
	void setPath(int i) { path = i; }
	void setRoadWork(bool b) { roadWork = b; }
	int getX() { return x; }
	int getY() { return y; }
	int getPath() { return path; }
	int getRoadWork() { return roadWork; }
};

std::vector<Point> getRWPList(int i);
std::vector<Point> getPointList(std::vector<Point> v, int a, int b);

int main(void){
	int a; //number of road from south to north
	int b; //number of road from east to west 

	while(std::cin >> a >> b){ //input number of road
		if(a == 0 && b == 0){ //end input
			break;
		}

		size_t num; //number of dataset
		std::cin >> num; //input number of dataset

		std::vector<Point> pointList = getPointList(getRWPList(num), a, b); //array of point

		for(size_t i = 0; i < pointList.size(); ++i){ //set path of all road
			if(pointList.at(i).getRoadWork() == true){
				pointList.at(i).setPath(0);
			}else{
				if(i == 0){
					pointList.at(i).setPath(1);
				}else if(i < b){
					pointList.at(i).setPath(pointList.at(i - 1).getPath()); //add number of path at west point 
				}else if(i % b == 0){
					pointList.at(i).setPath(pointList.at(i - b).getPath()); //add number of path at south point 
				}else{
					pointList.at(i).setPath(pointList.at(i - 1).getPath() + pointList.at(i - b).getPath()); //add number of path at west and south point 
				}
			}
		}

		std::cout << pointList.back().getPath() << std::endl; //output result
	}

	return 0;
}

std::vector<Point> getRWPList(int i){
	std::vector<Point> v; //array of road work point

	for(size_t j = 0; j < i; ++j){ //input grid of road work point
		int tmp1, tmp2;
		std::cin >> tmp1 >> tmp2;
		Point p;
		p.setX(tmp1);
		p.setY(tmp2);
		v.push_back(p);
	}

	return v;
}

std::vector<Point> getPointList(std::vector<Point> v, int a, int b){ //v is RWPList, a is number of road from south to north, b is number of road from west to north
	std::vector<Point> w;

	for(size_t i = 0; i < a; ++i){
		for(size_t j = 0; j < b; ++j){
			Point p;
			p.setX(i + 1);
			p.setY(j + 1);

			for(size_t k = 0; k < v.size(); ++k){
				if(p.getX() == v.at(k).getX() && p.getY() == v.at(k).getY()){
					p.setRoadWork(true);
				}
			}

			w.push_back(p);
		}
	}

	return w;
}