#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

#define PI 3.1415

int main()
{
	int a, b;	//rectangle
	int x , y, radius;	//(x,y) = The coordinate of the center of the circle
	scanf("%d %d %d %d %d", &a, &b, &x, &y, &radius);

	double enshu[2] = {0, 0};	//The point on the enshu of the circle
	double h = 0.0001;

	int i, j = 0;

	for (i = 0; i*h < 2*PI; i++){
		enshu[0] = x + radius*cos(i*h);
		enshu[1] = y + radius*sin(i*h);
		if (enshu[0] < 0 || enshu[1] < 0 || enshu[0] > a || enshu[1] > b) {
			j = 1;
			break;
		}
	}

	if(j == 0) printf("Yes\n");
	else printf("No\n");

	return 0;
}