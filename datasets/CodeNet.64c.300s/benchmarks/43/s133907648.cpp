#include <stdio.h>
#include <algorithm>
using namespace std;
 
int main(){
    int A = 0;
    int B = 0;
    int buf;
    for(int a = 0; a < 4; a++){
        scanf("%d", &buf);
        A += buf;
    }
    for(int a = 0; a < 4; a++){
        scanf("%d", &buf);
        B += buf;
    }
    printf("%d\n", max(A, B));
    return 0;
}