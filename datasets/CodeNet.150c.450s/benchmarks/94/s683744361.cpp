#include <iostream>
#include <vector>

void swap(std::vector<int> &target,int i,int j)
{
    int temp = target.at(i);
    target.at(i) = target.at(j);
    target.at(j) = temp;
    return;
}

int main(int argc, char const *argv[])
{
    int num = 0;
    std::cin >> num ;
    std::vector<int> array;
    int temp;
    for(int i = 0 ; i < num ; i ++){
        std::cin >> temp;
        array.push_back(temp);
    }
    int count = 0;
    for(int i = 0 ; i < num ; i ++){
        for(int j = num-1 ; j >i ; j --){
            if(array.at(j-1) > array.at(j)){
                swap(array,j,j-1);
                count ++;
            }
        }
    }
    
    for(int i = 0 ; i < num -1 ; i ++){
        std::cout << array.at(i) << " ";
    }
    std::cout << array.at(num-1) << std::endl;
    std::cout << count << std::endl;
    return 0;
}