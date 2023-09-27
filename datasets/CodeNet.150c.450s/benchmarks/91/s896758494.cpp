#include <cmath>
#include <cstdio>

const int size = 1000000;
int n[size];

int main() {
    for(int i = 0 ; i < size ; ++i) {
		n[i] = (i < 2) ? false : true;
	}
    for (int i = 0; i < std::sqrt(size); ++i) {
        if (n[i]) {
            for (int j = 2; i * j < size; ++j) {
                n[i * j] = false;
            }
        }
    }
    
    int m;
    while (~scanf("%d\n", &m)) {
        int ans = 0;
        for (int i = 0; i <= m; ++i) {
            if (n[i]) {
                ++ans;
            }
        }
        printf("%d\n", ans);
    }
}