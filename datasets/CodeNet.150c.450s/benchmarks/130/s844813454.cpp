#include "iostream"
#include "string"

int main()
{
    int n, m;
    int line[100][100], temp;
    int vect[100];
    int result[100];
    std::cin >> n >> m;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            std::cin >> line[i][j];

    for(int i = 0; i < m; i++){
        std::cin >> vect[i];
    }

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++){
            result[i] += vect[j] * line[i][j];
        }

    for(int i = 0; i < n; i++){
        if(1)
            std::cout << result[i] << std::endl;
        else
            std::cout << result[i];
    }

    return 0;
}