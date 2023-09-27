#include <iostream>
#include <vector>
#include <string>

void bubblesort(std::vector<std::string> &v)
{
   int n = v.size();
    for(int i = 0 ; i < n ; i ++){
        for(int j = n-1 ; j >i ; j --){
            if((int)(v.at(j-1).at(1)) > (int)(v.at(j).at(1))){
                std::string temp = v.at(j);
                v.at(j) = v.at(j-1);
                v.at(j-1) = temp;
            }
        }
    }
}

void insertionsort(std::vector<std::string> &v)
{
    int n = v.size();
    for(int i = 0 ; i < n ; i++){
        int minidx = i;
        for(int j = i ; j < n; j++){
            if((int)v.at(j).at(1) < (int)v.at(minidx).at(1)){
                minidx = j;
            }
        }
        std::string temp = v.at(i);
        v.at(i) = v.at(minidx);
        v.at(minidx) = temp;
    }
}

int main(int argc, char const *argv[])
{
    int n = 0;
    std::cin >> n;
    std::vector<std::string> v;
    for(int i = 0; i < n ; i++){
        std::string temp;
        std::cin >> temp;
        v.push_back(temp);
    }
    std::vector<std::string> bubble = v;
    std::vector<std::string> insertion = v;
    bubblesort(bubble);
    insertionsort(insertion);

    //Bubble sort is always a stable sort.
    for(int i = 0; i < n-1 ; i++){
        std::cout << bubble.at(i) << " ";
    }
    std::cout << bubble.at(n-1) << std::endl;
    std::cout << "Stable" << std::endl;

    for(int i = 0; i < n-1 ; i++){
        std::cout << insertion.at(i) << " ";
    }
    std::cout << insertion.at(n-1) << std::endl;

    //Use the uniqueness of stable
    for(int i = 0; i < n ; i++){
        if(bubble.at(i).compare(insertion.at(i)) != 0){
            std::cout << "Not stable" << std::endl;
            return 0;
        }
    }
    std::cout << "Stable" << std::endl;

    return 0;
}