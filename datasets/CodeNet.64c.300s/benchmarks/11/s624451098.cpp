#include <cstdio>

using namespace std;

int main()
{
	int time;
	int h,m,s;
	
	scanf("%d", &time);
	
	h = time / 3600;
	time -= h * 3600;
	m = time / 60;
	time -= m * 60;
	s = time;
	
	printf("%d:%d:%d\n", h, m, s);
	
	return (0);
}