#include <cstdio>
using namespace std;

int KetanoWa(char ch[])
{
    int sum = 0;
    for(int i = 0; ch[i]; ++i){
        sum += ch[i] - 48;
    }
    return sum;
}
int main()
{
    char ch[1001];
    while(true){
        scanf("%s", ch);
        int sum = KetanoWa(ch);
        if(sum == 0) break;
        printf("%d\n", sum);
    }
    return 0;
}