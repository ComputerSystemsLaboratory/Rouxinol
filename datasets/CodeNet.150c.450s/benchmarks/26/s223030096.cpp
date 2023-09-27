#include <cstdio>
using namespace std;

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if(a < b) printf("%s\n", "a < b");
    else if(a == b) printf("%s\n", "a == b");
    else printf("%s\n", "a > b"); 
    return 0;
}