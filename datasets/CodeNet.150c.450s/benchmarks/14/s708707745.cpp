#include <iostream>

int main() {
int n;
std::cin >> n;
for(int i = 1; i <= n; i++) {
int x = i;
for(int j = 1; x > 0; j++) {
if(i % 3 == 0) {
std::cout << ' ' << i;
break;
}
else if(x % 10 == 3) {
std::cout << ' ' << i;
break;
}
x /= 10;
}
}
std::cout << std::endl;
}