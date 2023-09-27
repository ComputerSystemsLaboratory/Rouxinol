#include <cstdio>
using namespace std;

int month[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
char dd[7][12] = {"Monday", "Tuesday", "Wednesday", "Thursday", 
                  "Friday", "Saturday", "Sunday"};

int main(){
    int m, d;
    while(true){
        scanf("%d %d", &m, &d);
        if(m == 0 && d == 0) break;
        int a = 3;
        for(int i = 1; i < m; i++){
            a = (a + month[i])%7;
        }
        a = (a + d - 1)%7;
        printf("%s\n", dd[a]);
    }
    return 0;
}