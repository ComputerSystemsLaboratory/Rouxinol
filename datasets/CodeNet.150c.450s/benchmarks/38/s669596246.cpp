#include <iostream>

int main() {
int N;
std::cin >> N;

for (int i = 0; i < N; i++) {
int a, b, c;
std::cin >> a >> b >> c;
int aa = a * a;
int bb = b * b;
int cc = c * c;
if (aa + bb == cc) std::cout << "YES" << std::endl;
else
if (aa + cc == bb) std::cout << "YES" << std::endl;
else
if (bb + cc == aa) std::cout << "YES" << std::endl;
else
std::cout << "NO" << std::endl;

}


return 0;
}