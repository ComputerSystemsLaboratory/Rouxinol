#include <iostream>
#include <vector>
using namespace std;

int Partition(std::vector<int>& List, int p, int r);

int Partition(std::vector<int>& List, int p, int r)
{
    int x = List[r];
    int i = p - 1;
    int Temp;
    
    for(int j = p; j < r; j++){
        if(List[j] <= x){
            i++;
            Temp    = List[i];
            List[i] = List[j];
            List[j] = Temp;
        }
    }
    Temp    = List[i + 1];
    List[i + 1] = List[r];
    List[r] = Temp;
    
    return i + 1;
}

int main(void){
    int Num, Temp, q;
    std::cin >> Num;
    
    std::vector<int> List;
    List.clear();
    for(int i = 0; i < Num; i++){
        std::cin >> Temp;
        List.push_back(Temp);
    }
    
    q = Partition(List, 0, List.size() - 1);
    
    for(int i = 0; i < List.size(); i++){
        if(i > 0)   std::cout << " ";
        
        if(i == q){
            std::cout << "[" << List[i] << "]";
        } else{
            std::cout << List[i];
        }
    }
    std::cout << std::endl;
}