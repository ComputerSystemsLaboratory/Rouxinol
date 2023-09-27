#include <iostream>
#include <cstdio>

int main() {
char str;
while(1) {
scanf("%c", &str);
if(str == '\n'){
std::cout << '\n';
break;
}
else if(static_cast<bool>(islower(str))) {
std::cout << static_cast<char>(toupper(str));
}
else if(static_cast<bool>(isupper(str))) {
std::cout << static_cast<char>(tolower(str));
}
else {
std::cout << str;
}
}
}