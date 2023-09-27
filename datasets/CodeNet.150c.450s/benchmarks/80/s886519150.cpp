#include <cstdio>
#include <algorithm>
using namespace std;

int main(){int s = 0, t = 0, temp;for(int i = 0; i < 4; ++i) {scanf("%d", &temp);s += temp;}for(int i = 0; i < 4; ++i) {scanf("%d", &temp);t += temp;}printf("%d\n", max(s, t));return 0;} 