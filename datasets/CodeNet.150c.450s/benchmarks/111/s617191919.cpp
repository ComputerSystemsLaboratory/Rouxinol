#include <iostream>
#include <array>
#include <fstream>

int main(){
    const int max_sum = 20;
    const int min_sum = 0;
    const int max_number = 100;
    int N;
    //std::ifstream ifs("517.txt");
    
    while(std::cin >> N){
        std::array<int, max_number> numbers;
        std::array<std::array<long long int, max_sum + 1>, max_number> count;
        for(int i = 0; i < max_number; ++i){
            count[i].fill(0);
        }
        for(int i = 0; i < N; ++i){
            std::cin /*ifs*/ >> numbers[i];
        }
        
        count[0][numbers[0]] = 1;
        for(int i = 1; i < N; ++i){
            for(int j = 0; j <= max_sum; ++j){
                if(j + numbers[i] <= max_sum){
                    count[i][j + numbers[i]] += count[i - 1][j];
                }
                if(j - numbers[i] >= min_sum){
                    count[i][j - numbers[i]] += count[i - 1][j];
                }
            }
        }
        std::cout << count[N - 2][numbers[N - 1]] << std::endl;
    }
    
    //ifs.close();
    return 0;
}