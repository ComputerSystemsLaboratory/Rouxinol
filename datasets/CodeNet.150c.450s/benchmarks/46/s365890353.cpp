#include<iostream>
int main(){
	int x, n;
	int a = 0;
	while (true){
		std::cin >> n >> x;
		if (n == 0 && x == 0){
			break;
		}
		else{
			int i, j, k;
			for (i = 1; i <= n; i++){
				
				for (j = 1; j <= n; j++){
					if (i == j){
						break;
					}
					else{
						for (k = 1; k <= n; k++){
							if (k == i || k == j || j == i){
								break;
							}
							else if (i + j + k == x){
								++a;
							}
						}

					}
				}
			}
		}
		std::cout << a << "\n";
		a = 0;
	}
	return 0;
}