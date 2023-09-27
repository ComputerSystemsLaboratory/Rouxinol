#include<iostream>
#include<vector>
int main(void) {
	unsigned long x, y,z,MAX, d=1;
	std::cin >> x >> y;
	MAX = x;
	if (x < y) { MAX = y;
	y = x;
	x = MAX;
	}else if(x==y){ std::cout << x << std::endl; 
	return 0;
	}
	z = x%y;
		unsigned long Range = y;
	if (y > z) { Range = z; }
	for (int i = Range; i > 0; --i) {
		if (y%i == 0 && z%i == 0) { d = i;
		break;
		}
	}
	std::cout << d << std::endl;
		//system("pause");
	return 0;
}