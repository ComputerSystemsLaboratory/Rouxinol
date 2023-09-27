#include<cstdio>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    int A[3];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d %d %d", &A[0], &A[1], &A[2]);
        sort(A, A+3);
        double a= (double)A[0], b= (double)A[1], c= (double)A[2];
        double cosine = (b*b+a*a-c*c)/(2*b*c);

        if(cosine == 0) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

