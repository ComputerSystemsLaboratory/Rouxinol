#include <stdio.h>
#include <math.h>

int debug=0;

int main(void){
	double ax, ay, bx, by, cx, cy, px, py;
	double a, b, c, ap, bp, cp;
	double tmp;
	double s2, sa2, sb2, sc2;
	double s, sa, sb, sc;

	while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &ax, &ay, &bx, &by, &cx, &cy, &px, &py) != -1){
		//ツ各ツ静シツ閉ェツづ個陳キツつウツづーツ計ツ算
		a = sqrt(fabs((bx - cx) * (bx - cx) + (by - cy) * (by- cy)));
		b = sqrt(fabs((ax - cx) * (ax - cx) + (ay - cy) * (ay- cy)));
		c = sqrt(fabs((ax - bx) * (ax - bx) + (ay - by) * (ay- by)));
		ap = sqrt(fabs((ax - px) * (ax - px) + (ay - py) * (ay- py)));
		bp = sqrt(fabs((bx - px) * (bx - px) + (by - py) * (by- py)));
		cp = sqrt(fabs((cx - px) * (cx - px) + (cy - py) * (cy- py)));

		if(debug) printf("[length]a = %.2f, b == %.2f, c = %.2f, ap = %.2f, bp = %.2f, cp = %.2f\n", a, b, c, ap, bp, cp);

		//heron
		tmp = (a + b + c) / 2;
		s2 = tmp * (tmp - a) * (tmp - b) * (tmp - c);
		s = sqrt(s2);
		if(debug) printf("s = %lf\n", s);

		tmp = (a + bp + cp) / 2;
		sa2 = tmp * (tmp - a) * (tmp - bp) * (tmp - cp);
		sa = sqrt(sa2);

		tmp = (b + ap + cp) / 2;
		sb2 = tmp * (tmp - b) * (tmp - ap) * (tmp - cp);
		sb = sqrt(sb2);

		tmp = (c + ap + bp) / 2;
		sc2 = tmp * (tmp - c) * (tmp - ap) * (tmp - bp);
		sc = sqrt(sc2);

		if(debug) printf("sa + sb + sc = %lf\n", sa + sb + sc);

		if(fabs(sa + sb + sc - s) < 0.000000001){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}