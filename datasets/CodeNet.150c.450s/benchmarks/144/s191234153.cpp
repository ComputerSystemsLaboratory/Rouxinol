#include <iostream>

int main() {
        int n, m, l;
        std::cin >> n >> m >> l;
        long long int a[n][m], b[m][l], c[n][l];

        for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                        std::cin >> a[i][j];
                }
        }

        for(int j=0; j<m; j++){
                for(int k=0; k<l; k++){
                        std::cin >> b[j][k];
                }
        }

        for(int i=0; i<n; i++){
                for(int k=0; k<l; k++){
                        long long int sum = 0;
                        for(int j=0; j<m; j++){
                                sum += a[i][j] * b[j][k];
                        }
                        c[i][k] = sum;
                }
        }

        for(int i=0; i<n; i++){
                for(int k=0; k<l; k++){
                        std::cout << c[i][k] << std::flush;
                        if(k!=l-1) std::cout << ' ' << std::flush;
                        else if(k==l-1)std::cout << std::endl;
                }
        }
}