#include<cstdio>
using namespace std;

int main() {
int a, b, tmp;

scanf("%d%d", &a, &b);

while((tmp = a % b) != 0){
a = b; b = tmp;
}
printf("%d\n", b);

return 0;
}