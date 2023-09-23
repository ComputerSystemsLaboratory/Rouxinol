#include <cstdio>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int sum;
    if(n==0){
        sum=1;
    } else if(n==1){
        sum=1;
    } else{
        int older=1, oldest=1;
        sum=0;
        for(int i=2; i<=n; i++){
            sum=older+oldest;
            oldest=older;
            older=sum;
        }
    }
    printf("%d\n", sum);
    return 0;
}