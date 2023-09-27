#include <cstdio>
#include <algorithm>
using namespace std;

typedef struct {
	int h;
	int w;
	int D;
} RECTANGLE;

RECTANGLE rectangle[30000];

bool cmp(const RECTANGLE& A, const RECTANGLE& B)
{
	if (A.D == B.D){
		return (A.h < B.h);
	}
	return (A.D < B.D);
}

int main()
{
	int i, n;
	
	for (int w = 2, i = 0; w <= 150; w++){
		for (int h = 1; h < w; h++){
			rectangle[i].h = h;
			rectangle[i].w = w;
			rectangle[i].D = h * h + w * w;
			i++;
			n = i;
		}
	}
	
	sort(rectangle, rectangle + n, cmp);
	
	int h, w;
	while (scanf("%d %d", &h, &w), h + w){
		for (int i = 0; i < n; i++){
			if (h == rectangle[i].h && w == rectangle[i].w){
				printf("%d %d\n", rectangle[i + 1].h, rectangle[i + 1].w);
				break;
			}
		}
	}
	
	return (0);
}