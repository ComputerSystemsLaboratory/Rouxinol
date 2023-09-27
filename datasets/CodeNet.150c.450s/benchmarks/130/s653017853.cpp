#include <iostream>       
                          
int main(int argc, char *argv[]) {
    int matrix[100][100] = {{0}};
    int n, m = 0;         
    int vector[100] = {0};
                          
    std::cin >> n >> m;   
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            std::cin >> matrix[i][j];
        }                 
    }                     
    for(int i = 0; i < m; i++) {
        std::cin >> vector[i];
    }                     
                          
    for(int i = 0; i < n; i++) {
        long int ret = 0; 
        for(int j = 0; j < m; j++) {
            ret += matrix[i][j] * vector[j];
        }                 
        std::cout << ret << std::endl;
    }                     
    return 0;             
}