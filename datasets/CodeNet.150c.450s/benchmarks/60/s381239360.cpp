#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    vector< vector<int> > g_matrix;
    g_matrix = vector< vector<int> >(n, vector<int>(n, 0));
    
    for(int i = 0; i < n; i++){
        int u, k;
        scanf("%d %d", &u, &k);
        u--;
        for(int j = 0; j < k; j++){
            int v;
            scanf("%d", &v);
            v--;
            g_matrix[u][v] = 1;
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - 1; j++){
            printf("%d ", g_matrix[i][j]);
        }
        printf("%d", g_matrix[i][n - 1]);
        printf("\n");
    }
    return 0;
}
