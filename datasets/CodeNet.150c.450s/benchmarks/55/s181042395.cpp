#include <iostream>
#include <string>

int main() {
std::string number;
do{
std::cin >> number;

int sum = 0;
for(int i = 0; number[i]; i++){
int num = number[i] - '0';
sum += num;
}
if(!(number[0] == '0')){
std::cout << sum << std::endl;
}
} while(!(number[0] == '0'));
}