#include <stdio.h>

typedef struct _Point {
	double x;
	double y;
} Point;

static Point
sub_vector(const Point* a, const Point* b)
{
    Point ret;
    ret.x = a->x - b->x;
    ret.y = a->y - b->y;

    return ret;
}

int
main(void)
{
	char line[80];

	Point a;
	Point b;
	Point c;
	Point p;
	
	while (fgets(line, sizeof line, stdin)) {
		if (sscanf(line, "%lf %lf %lf %lf %lf %lf %lf %lf",
				   &(a.x), &(a.y), &(b.x), &(b.y), &(c.x), &(c.y),
				   &(p.x), &(p.y)) == 8) {

			Point ab = sub_vector(&b, &a);
			Point bp = sub_vector(&p, &b);
			
			Point bc = sub_vector(&c, &b);
			Point cp = sub_vector(&p, &c);
			
			Point ca = sub_vector(&a, &c);
			Point ap = sub_vector(&p, &a);
			
		    double c1 = ab.x * bp.y - ab.y * bp.x;
		    double c2 = bc.x * cp.y - bc.y * cp.x;
		    double c3 = ca.x * ap.y - ca.y * ap.x;
    
        	bool rt = (c1 > 0 && c2 > 0 && c3 > 0) ||
        			  (c1 < 0 && c2 < 0 && c3 < 0);

			printf("%s\n", (rt ? "YES" : "NO"));
		}
	}

	return 0;
}