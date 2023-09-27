#include <iostream>
using namespace std;

struct TCoordinate
{
	float x;
	float y;
};

struct TLine
{
	TCoordinate StartPoint;
	TCoordinate EndPoint;
	float GetInclination()
	{
		return (EndPoint.y - StartPoint.y) / (EndPoint.x - StartPoint.x);
	}
};

int main()
{
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		TLine AB, CD;
		cin >> AB.StartPoint.x >> AB.StartPoint.y
		    >> AB.EndPoint.x   >> AB.EndPoint.y
		    >> CD.StartPoint.x >> CD.StartPoint.y
		    >> CD.EndPoint.x   >> CD.EndPoint.y;
		if(AB.GetInclination() == CD.GetInclination()){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
	return 0;
}