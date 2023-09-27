#include <iostream>
#include <vector>

int main(void){
    int N, number, max_sum = 20;
    std::cin >> N;
    std::vector<std::vector<unsigned long long> > joi(N, std::vector<unsigned long long>(max_sum + 1, 0));
    std::cin >> number;
    joi[0][number] = 1;
    for(int i = 1; i <= N - 2; ++i){
        std::cin >> number;
        for(int j = 0; j <= max_sum; ++j){
                if(j + number <= max_sum)
                    joi[i][j + number] += joi[i - 1][j];
                if(0 <= j - number)
                    joi[i][j - number] += joi[i - 1][j];
        }
    }
    std::cin >> number;
    std::cout << joi[N - 2][number] << std::endl;
}