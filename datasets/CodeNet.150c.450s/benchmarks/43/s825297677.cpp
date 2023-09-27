#include <cstdio>
using namespace std;

int main(void)
{
    
    while (1){
        int n;
        scanf("%d", &n);
        if (n == 0) break;
        
        int A, B;
        int A_sum = 0, B_sum = 0;
        
        for (int i = 0; i < n; i++){
            scanf("%d %d", &A, &B);
            
            if (B < A){
                A_sum += A + B;
            }
            else if (A < B){
                B_sum += A + B;
            }
            else {
                A_sum += A;
                B_sum += B;
            }
        }
        
        printf("%d %d\n", A_sum, B_sum);
        
    }
    
    return (0);
}