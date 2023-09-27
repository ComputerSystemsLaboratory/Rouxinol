#include <cstdio>

int main (int argc, char *argv[]) {
	using namespace std;
	int a, b, c, d, e, f;
	while (EOF != fscanf(stdin, "%d %d %d %d %d %d\n", &a, &b, &c, &d, &e, &f)) {
		float tmp1 = static_cast<float>(f)-(static_cast<float>(c)*static_cast<float>(d)/static_cast<float>(a));
		float tmp2 = static_cast<float>(e)-(static_cast<float>(b)*static_cast<float>(d)/static_cast<float>(a));
		float y = tmp1/tmp2;
		float x = (static_cast<float>(c) - static_cast<float>(b) * y) / static_cast<float>(a);
		printf("%.3f %.3f\n", x, y);		
		//printf("y=%f\n", (f-(c*d/a))/(e-(b*d/a)));
	}
	
	return 0;
}