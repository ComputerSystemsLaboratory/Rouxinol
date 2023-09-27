#include <iostream>

int main()
{
    int n;
    while(1){
        std::cin >> n;
        if(n == 0){
            break;
        }
        int score[n];
        int sum = 0;
        int max = 0;
        int min = 1000;
        for(int i = 0; i < n; i++){
            std::cin >> score[i];
            if(max < score[i]){
                max = score[i];
            }
            if(min > score[i]){
                min = score[i];
            }
            sum += score[i];
        }
        int average;
        average = (sum - max - min) / (n - 2);
        std::cout << average << std::endl;
    }
    return 0;
}