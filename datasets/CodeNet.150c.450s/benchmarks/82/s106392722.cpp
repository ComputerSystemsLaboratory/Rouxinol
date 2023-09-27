#include<iostream>
#include<string>

class dice {
public:
	int d1, d2, d3, d4, d5, d6, tmp;

	void set(int a1,int a2, int a3, int a4, int a5, int a6) {
		d1 = a1;
		d2 = a2;
		d3 = a3;
		d4 = a4;
		d5 = a5;
		d6 = a6;
	}
	void n(void) {
		tmp = d1;
		d1 = d2;
		d2 = d6;
		d6 = d5;
		d5 = tmp;
	}
	void s(void) {
		tmp = d1;
		d1 = d5;
		d5 = d6;
		d6 = d2;
		d2 = tmp;
	}
	void e(void) {
		tmp = d1;
		d1 = d4;
		d4 = d6;
		d6 = d3;
		d3 = tmp;
	}
	void w(void) {
		tmp = d1;
		d1 = d3;
		d3 = d6;
		d6 = d4;
		d4 = tmp;
	}
};


int main() {

	dice d;
	std::string c;
	int a[7], i,j,f,u,n;

		for (i = 1; i < 7; i++) {
			std::cin >> a[i];
		}
		d.set(a[1], a[2], a[3], a[4], a[5], a[6]);

		std::cin >> n;

		for (i = 0; i < n; i++) {
			std::cin >> u >> f;

			c = "NNNNENNNN";

			for (j = 0; j < c.size(); j++) {
				if (d.d2 == f)break;

				if (c[j] == 'N') d.n();
				else if (c[j] == 'S')d.s();
				else if (c[j] == 'E')d.e();
				else if (c[j] == 'W')d.w();
				else std::cout << "Error" << std::endl;
			}

			if (d.d2 != f)std::cout << "couldn't find front" << std::endl;

			c = "EEEE";

			for (j = 0; j < c.size(); j++) {
				if (d.d1 == u)break;

				if (c[j] == 'N') d.n();
				else if (c[j] == 'S')d.s();
				else if (c[j] == 'E')d.e();
				else if (c[j] == 'W')d.w();
				else std::cout << "Error" << std::endl;
			}


			std::cout << d.d3 << std::endl;
		}

	return 0;
}
