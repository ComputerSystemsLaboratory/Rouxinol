#include <iostream>

static const int MAX_NUM = 100;

int main(int argc, char const *argv[])
{
    int R[MAX_NUM],n;

    std::cin >> n;

    for(int i = 0;i < n;i++){
        std::cin >> R[i];
    }

    for(int i = 0;i < n;i++){
        if(i != n - 1) std::cout << R[i] << " ";
        else std::cout << R[i] << std::endl;
    }

    for(int i = 1;i < n;i++){
        int v = R[i];
        int j = i - 1;

        while((j >= 0) && (R[j] > v)){
            R[j + 1] = R[j];
            j--;
        }
        R[j + 1] = v;

        for(int i = 0;i < n;i++){
            if(i != n - 1) std::cout << R[i] << " ";
            else std::cout << R[i] << std::endl;
        }
    }

    return 0;
}

