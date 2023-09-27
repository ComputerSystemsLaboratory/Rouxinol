#include <iostream>

double det(double mat[2][2]) {
    double det = 0.0 ;
    det = mat[0][0]*mat[1][1] ;
    det -= mat[0][1]*mat[1][0] ;
    return det ;
}


double **inv(double (&mat)[2][2]) {
    
    double detNum = 1.0/det(mat) ;
    double dotMat[2][2] = {
        {  mat[1][1]*detNum, -mat[0][1]*detNum },
        { -mat[1][0]*detNum,  mat[0][0]*detNum }
    } ;
    
    double **p = (double **)malloc(sizeof(double *) * 2) ;
    for (int i=0; i<2; i++) {
        p[i] = (double *)malloc(sizeof(double) * 2) ;
        for (int j=0; j<2; j++) {
            p[i][j] = dotMat[i][j] ;
        }
    }
    return p;
    
}

double **dot(double (&mat1)[2][2], double (&mat2)[2][1]) {
    
    
    double mat3[2][1] ;
    
    for (int n=0; n<2; n++) {
        double sum = 0 ;
        for (int m=0; m<2; m++) {
            sum += mat1[n][m]*mat2[m][0] ;
        }
        mat3[n][0] = sum ;
    }
    
    
    
    double **p = (double **)malloc(sizeof(double *) * 2) ;
    for (int i=0; i<2; i++) {
        p[i] = (double *)malloc(sizeof(double)) ;
        p[i][0] = mat3[i][0] ;
    }
    return p;
}



int main(int argc, const char * argv[]) {
    double a, b, c, d, e, f ;
    while (1) {
        std::cin >> a >> b >> c >> d >> e >> f ;
        
        if (std::cin.fail()) break ;
        
        double A[2][2] = {
            { a, b },
            { d, e }
        } ;
        double P[2][1] = {
            { c },
            { f }
        } ;
        
        auto invAp = inv(A) ;
        double invA[2][2] ;
        for (int i=0; i<2; i++) {
            for (int j=0; j<2; j++) {
                invA[i][j] = invAp[i][j] ;
            }
        }
        
        
        auto X = dot(invA, P) ;
        
        printf("%.3f %.3f\n", X[0][0], X[1][0]) ;
        
        free(invAp) ;
        free(X) ;
    }
    return 0;
}
