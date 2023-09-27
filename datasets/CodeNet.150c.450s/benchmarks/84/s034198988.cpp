#include <iostream>
#include <vector>
using namespace std;

#define MAX 2000000000

long long Merge(std::vector<int>& List, int Left, int Mid, int Right);
long long MergeSort(std::vector<int>& List, int Left, int Right);

long long Merge(std::vector<int>& List, int Left, int Mid, int Right)
{
    int n1 = Mid - Left;
    int n2 = Right - Mid;
    long long Count = 0;
    
    std::vector<int> LList;
    LList.clear();
    for(int i = 0; i < n1; i++){
        LList.push_back(List[Left + i]);
    }
    
    std::vector<int> RList;
    RList.clear();
    for(int i = 0; i < n2; i++){
        RList.push_back(List[Mid + i]);
    }
    LList.push_back(MAX);
    RList.push_back(MAX);
    
    int j = 0;
    int k = 0;
    for(int l = Left; l < Right; l++){
        if(LList[j] <= RList[k]){
            List[l] = LList[j];
            j++;
        } else{
            List[l] = RList[k];
            k++;
            Count = Count + Mid + k - l - 1;
        }
    }
    return Count;
}

long long MergeSort(std::vector<int>& List, int Left, int Right)
{
    long long Count = 0;
    if(Left + 1 < Right){
        int Mid = (Left + Right) / 2;
        Count += MergeSort(List, Left, Mid);
        Count += MergeSort(List, Mid, Right);
        Count += Merge(List, Left, Mid, Right);
    }
    return Count;
}

int main(void){
    int Num, Temp;
    vector<int> List;
    List.clear();
    
    std::cin >> Num;
    
    for(int i = 0; i < Num; i++){
        std::cin >> Temp;
        List.push_back(Temp);
    }
    std::cout << MergeSort(List, 0, Num) << std::endl;
}