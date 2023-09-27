#include <iostream>
#include <cmath>
#include <string>
#include <string.h>
#include <cstdlib>
#include <iomanip>
#include <stdio.h>

using namespace std;

int main(){

        int n,m,e;
        int *mat_orig,*mat,*vec_orig,*vec;

        scanf("%d %d\n",&n,&m);

        mat_orig = mat = (int *)malloc(n*m*sizeof(int));
        vec_orig = vec = (int *)malloc(m*sizeof(int));

        for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                        scanf("%d ",mat);
                        mat++;
                }
        }

        for(int i=0;i<m;i++){
                scanf("%d\n",vec);
                vec++;
        }

        for(int i=0;i<n;i++){
                e=0;
                for(int i=0;i<m;i++){
                        e += *mat_orig * vec_orig[i];
                        mat_orig++;
                }
                printf("%d\n",e);
        }

        return 0;
}
