
#include <iostream>

int main(int argc, const char * argv[]) {
    
    int n, m, l ;
    
    std::cin >> n >> m >> l ;
    
    
    int A[n][m] ;
    for (int y=0; y<n; y++) {
        for (int x=0; x<m; x++) {
            std::cin >> A[y][x] ;
            if (A[y][x] > 10000) return 0 ;
        }
    }
    
    int B[m][l] ;
    for (int y=0; y<m; y++) {
        for (int x=0; x<l; x++) {
            std::cin >> B[y][x] ;
            if (B[y][x] > 10000) return 0 ;
        }
    }
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<l; j++) {
            long long int Cij = 0 ;
            
            for (int k=0; k<m; k++) {
                Cij += A[i][k]*B[k][j] ;
            }
            
            if (j==0) printf("%lld", Cij) ;
            else printf(" %lld", Cij) ;
            
        }
        printf("\n");
    }
    
    
    return 0 ;
}


