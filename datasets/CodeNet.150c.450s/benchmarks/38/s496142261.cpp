#include <iostream>

bool judgement(int a, int b, int c)
{
	if (a*a == b*b + c*c) {
		return true;
	} else {
		return false;
	}
}

int main()
{
    int x;
	int y;
    int z;
	bool flag[3];
	int n;
	std::cin >> n;
	while (n > 0) {
	    std::cin >> x >> y >> z;
	    flag[0] = judgement(x, y, z);
	    flag[1] = judgement(y, z, x);
	    flag[2] = judgement(z, x, y);
	    if (flag[0] || flag[1] || flag[2]) {
	    	std::cout << "YES" << std::endl;
	    	} else {
	    		std::cout << "NO" << std::endl;
	    		}
	    n --;
	   }
}
	