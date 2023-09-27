#include <cstdio>

int main() {
    int n,m;
    std::scanf("%d%d",&n,&m);

    int gyoretsu[n][m];

    int retsubekutoru[m];


    for (int i = 0;i<n;i++) {
        for (int j = 0;j<m;j++) {
            std::scanf("%d",&gyoretsu[i][j]);
        }
    }

    for (int i = 0;i<m;i++) {
        std::scanf("%d",&retsubekutoru[i]);
    }


    for (int i = 0;i<n;i++) {
        int sum = 0;
        for (int j = 0;j<m;j++) {
            //std::printf("%d\n",gyoretsu[i][j]*retsubekutoru[j]);
            sum+=gyoretsu[i][j]*retsubekutoru[j];
        }
        std::printf("%d\n",sum);
    }


}
