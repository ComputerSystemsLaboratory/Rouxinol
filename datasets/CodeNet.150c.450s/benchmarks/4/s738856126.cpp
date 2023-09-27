#include <cstdio>
using namespace std;

int main(){
    int m, f, r;
    while(true){
        scanf("%d %d %d", &m, &f, &r);
        if(m == -1 && f == -1 && f == -1) break;
        
        char g;
        if(m == -1 || f == -1){
            g = 'F';
        }else if(m + f >= 80){
            g = 'A';
        }else if(m + f >= 65){
            g = 'B';
        }else if(m + f >=50){
            g = 'C';
        }else if(m + f >= 30){
            if(r >= 50) g = 'C';
            else g = 'D';
        }else{
            g = 'F';
        }

        printf("%c\n", g);
    }
    return 0;
}