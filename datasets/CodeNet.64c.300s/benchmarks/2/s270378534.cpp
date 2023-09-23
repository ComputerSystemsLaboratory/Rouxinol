#include <iostream>

int main() {
int m, f, r;

do{
std::cin >> m >> f >> r;
int sum = m + f;

if(m == -1 || f == -1){
if(m == -1 && f == -1 && r == -1){
}
else{
std::cout << 'F' << std::endl;
}
}
else if(sum >= 80){
std::cout << 'A' << std::endl;
}
else if(sum >= 65 && sum < 80){
std::cout << 'B' << std::endl;
}
else if(sum >= 50 && sum < 65){
std::cout << 'C' << std::endl;
}
else if(sum >= 30 && sum < 50){
if(r >= 50){
std::cout << 'C' << std::endl;
}
else {
std::cout << 'D' << std::endl;
}
}
else if(sum < 30){
std::cout << 'F' << std::endl;
}
} while(!(m == -1 && f == -1 && r == -1));
}