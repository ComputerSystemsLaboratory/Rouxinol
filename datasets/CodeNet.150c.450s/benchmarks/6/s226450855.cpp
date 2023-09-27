#include <iostream>
#include <cmath>
#include <vector>
using namespace std;


signed main(){

    std::vector<int> v(3);
    int temp = -1000;
    bool flag = true;

    for(int i = 0; i < 3; i++){
        std::cin >> v[i];
        if (temp < v[i]){
            temp = v[i];
        }
        else{
            flag = false;
        }
    }

    if (flag == true){
        std::cout << "Yes" << std::endl;
    }
    else{
        std::cout << "No" << std::endl;
    }

    return 0;
}
