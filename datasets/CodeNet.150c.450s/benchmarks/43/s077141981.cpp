#include <algorithm>
#include <cstdio>
#include <functional>

using namespace std;

int main(){
    int n, a, b;
    int a_score, b_score;
    while(true){
        a_score = b_score = 0;
        scanf("%d", &n);
        if(n == 0) break;
        for(int i = 0; i < n; i++){
            scanf("%d %d", &a, &b);
            if( a > b ){
                a_score += ( a + b);
            } else if( a < b ){
                b_score += ( a + b);
            } else {
                a_score += a;
                b_score += b;
            }
        }
        printf("%d %d\n", a_score, b_score);


    }
    return 0;

}