#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <set>
#include <algorithm>
#include <array>
#include <complex>
#include <string>
#include <utility>
#include <map>
int main() {
	int a[6], sum[5] = {0};
    int i = 0;
    while(1){
        std::cin >> a[i];

        if (a[i] == 0) {
            break;
        }
		i++;
        
    }
	i = 0;
    while (a[i] != 0) {
        sum[i] += (1000 - a[i]) / 500;
        a[i] = (1000 - a[i]) % 500;
        sum[i] += a[i] / 100;
        a[i] = a[i] % 100;
        sum[i] += a[i] / 50;
        a[i] = a[i] % 50;
        sum[i] += a[i] / 10;
        a[i] = a[i] % 10;
        sum[i] += a[i] / 5;
        a[i] = a[i] % 5;
        sum[i] += a[i];
        i++;
    }
    for (int j = 0; j<i; j++) {
        std::cout << sum[j] << std::endl;
    }
    return 0;
}
