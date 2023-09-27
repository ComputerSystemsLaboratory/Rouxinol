#include <iostream>
#include <vector>
using namespace std;

void swap(int& x, int& y);

void swap(int& x, int& y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main(void){
    vector<int> Small;
    vector<int> Big;
    int x, y;
    
    while(1){
        std::cin >> x;
        std::cin >> y;
        if(x == 0 && y == 0)    break;
        
        if(x > y)   swap(x, y);
        
        Small.push_back(x);
        Big.push_back(y);
    }
    
    for(int i = 0; i < Small.size(); i++){
        std::cout << Small[i] << " " << Big[i] << std::endl;
    }
    
}