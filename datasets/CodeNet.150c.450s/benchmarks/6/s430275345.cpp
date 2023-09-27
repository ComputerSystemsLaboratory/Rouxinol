#include <cstdio>
using namespace std;

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a < b && b < c) printf("%s\n", "Yes");
    else printf("%s\n", "No");
    return 0;
}