#include <cstdio>
using namespace std;

int main()
{
	int h, m, s;
	
	scanf("%d", &s);
	
	h = s / 3600;
	
	m = (s - h * 3600) / 60;
	
	s = s - (h * 3600 + m * 60);
	
	printf("%d:%d:%d\n", h, m, s);
	
	return (0);
}