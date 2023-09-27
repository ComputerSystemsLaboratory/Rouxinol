#include <cstdio>
#include <cmath>

using namespace std;

int main(void)
{
    int h, w;
    int h2;
    double w2;
    for (;;) {
	scanf("%d %d", &h, &w);
	if (h == 0 && w == 0)
	    return 0;

	int z = pow(h, 2) + pow(w, 2);
	w2 = sqrt(z);
	for(h2 = h+1; h2 < w2; h2++) {
	    w2 = sqrt(z - pow(h2, 2));
	    if (w2 == static_cast<int>(w2))
		break;
	}
	if(w2 <= h2) {
	    z++;
	    for (int flag = 0; flag == 0; z++) {
		for(h2 = 1; pow(h2,2) < z/2; h2++) {
		    w2 = sqrt(z - pow(h2, 2));
		    if (w2 == static_cast<int>(w2)) {
			flag = 1;
			break;
		    }
		}
	    }
	}
	printf("%d %d\n", h2, static_cast<int>(w2));
    }
}