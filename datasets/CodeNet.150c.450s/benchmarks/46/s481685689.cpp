#include <iostream>

int main() {
int n, x;
int sum, count;

do{
count = 0;
std::cin >> n >> x;
for(int i = 0; i < n; i++){
for(int j = 1+i; j < n; j++){
for(int k = 1+j; k < n; k++){
sum = (n-i)+(n-j)+(n-k);
if(sum == x) {
count += 1;
}
}
}
}
if(!(n == 0 && x == 0)){
std::cout << count <<std::endl;
}
} while(!(n == 0 && x == 0));
}