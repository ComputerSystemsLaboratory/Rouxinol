#include <stdio.h>
#include <queue>

using namespace std;

int main() {
    int a=0, b=0, c=0;
    for(int i = 0; i < 10; ++i) {
        int temp;
        scanf("%d",&temp);
        if(temp>a) {
            c = b;
            b = a;
            a = temp;
        } else if(temp > b) {
            c = b;
            b = temp;
        } else if(temp > c) {
            c = temp;
        } else {
        }
    }
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
}