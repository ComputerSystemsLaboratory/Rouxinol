#include <iostream>
#include <vector>
 
int main(){
    const int max = 20;
     
    int num_of_fig;
    std::cin >> num_of_fig;
    std::vector<int> formula(num_of_fig);
    for(int i = 0; i < num_of_fig; ++i){
        std::cin >> formula[i];
    }
     
    std::vector<std::vector<unsigned long long>> total(num_of_fig);
    for(int i = 0; i < num_of_fig; ++i){
        total[i].resize(max+1, 0);
    }
    total[0][formula[0]] = 1;
     
    for(int i = 0; i < num_of_fig - 2; ++i){
        for(int j = 0; j <= max; ++j){
            if(j + formula[i+1] <= max){
                total[i+1][j + formula[i+1]] += total[i][j];
            }
            if(j - formula[i+1] >= 0){
                total[i+1][j - formula[i+1]] += total[i][j];
            }
        }
    }
     
    std::cout << total[num_of_fig - 2][formula[num_of_fig - 1]] << std::endl;
     
    return 0;
}