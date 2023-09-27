#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
    int n = 0;
    std::cin >> n;
    std::vector<int> v;
    for(int i = 0 ; i < n ; i++){
        int temp = 0;
        std::cin >> temp;
        v.push_back(temp);
    }
    //algorithm
    int count = 0;
    for(int i = 0 ; i < n ; i++){
        int minidx = i;
        for(int j = i ; j < n; j++){
            if(v.at(j) < v.at(minidx)){
                minidx = j;
            }
        }
        if(minidx != i) count ++;
        int temp = v.at(i);
        v.at(i) = v.at(minidx);
        v.at(minidx) = temp;
    }
    //output
    for(int i = 0 ; i < n -1 ; i ++){
        std::cout << v.at(i) << " ";
    }
    std::cout << v.at(n-1) << std::endl;
    std::cout << count << std::endl;
    return 0;
}