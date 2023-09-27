#include <iostream>

int value(int a[], int size, int p){
	int w = 0, k = 1;
	for (int i = 0; i < size; i++){
		if (w + a[i] <= p){
			w += a[i];
		}else{
			w = a[i];
			k++;
		}
	}
	return k;
}
int main(){
	int n, k;
	std::cin >> n >> k;
	int w[n];
	int max = 0; int sum = 0;
	for (int i = 0; i < n; i++){
		std::cin >> w[i];
		if (max < w[i]){
			max = w[i];
		}
		sum += w[i];
	}
	while (max != sum){
		int mid = (max + sum) / 2;
		if (value(w, n, mid) > k){
			max = mid + 1;
		}else{
			sum = mid;
		}
	}
	std::cout << max << std::endl;
	return 0;
}