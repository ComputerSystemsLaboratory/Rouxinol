#include <cstdio>
using namespace std;

int main(){
    int d;
    while(scanf("%d",&d) == 1){
        int area = 0;
        for(int i = 0; i < 600; i += d){
            area += i*i * d;
        }
        printf("%d\n",area);
    }
}