#include <iostream>


int main()
{
    int n,m,tes;
    std::cin >> n >> m;
    int vec[n][m];
    int ret[m];
    for(int a=0;a<n;a++){
        for(int b=0;b<m;b++){
            std::cin >> vec[a][b];
        }
    }
    for(int c=0;c<m;c++){
        std::cin >> ret[c];
    }

    for(int d=0;d<n;d++){
        int co=0;
        for(int e=0;e<m;e++){
            tes=vec[d][e]*ret[e];
            co=co+tes;
        }
        std::cout << co << std::endl;
    }
}