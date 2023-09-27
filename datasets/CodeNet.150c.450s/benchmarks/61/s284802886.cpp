#include<iostream>
#include<vector>

int main(){
	int n, a, b, c, x;

	while (std::cin >> n >> a >> b >> c >> x){

		if (n == 0 && a == 0 && b == 0 && c == 0 && x == 0)break;

		std::vector<int>y(n);
		for (int i = 0; i < n; i++)std::cin >> y[i];

		int flam = 0, num = 0;

		while (true){
			if (x == y[num]){
				num++;
				if (num == n)break;
			}
			x = (a*x + b) % c;
			flam++;
			if (flam > 10000){
				flam = -1;
				break;
			}
		}

		std::cout << flam << std::endl;

	}

	return 0;
}