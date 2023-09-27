#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int Search(vector<int>& List, int Max);

int Search(vector<int>& List, int Max){
    int Count = 0;
    int TotalObject = 0;
    
    for(int i = 0; i < List.size(); i++){
        TotalObject += List[i];
        if(TotalObject > Max){
            Count++;
            TotalObject = 0;
            i--;
        } else if(TotalObject <= Max && i == List.size() - 1){
            Count++;
        }       
    }
    return Count;
}

int main(void){
    int ObjectNumber, TracKNumber, Object;
    int TotalObject = 0;
    int Max = 0;
    vector<int> List;
    
    std::cin >> ObjectNumber >> TracKNumber;
    
    List.clear();
    for(int i = 0; i < ObjectNumber; i++){
        std::cin >> Object;
        if(Max < Object)    Max = Object;
        TotalObject+= Object;
        List.push_back(Object);
    }
    
    if(TracKNumber == 1){
        cout << TotalObject << endl;
        return 0;
    }
    int Ans = ceil((double)TotalObject / TracKNumber);
    if(Max > Ans)   Ans = Max;
    
    bool IsAnswer = false;
    while(!IsAnswer){
        if(Search(List, Ans) <= TracKNumber){
            IsAnswer = true;
        } else {
            Ans++;
        }
    }
    cout << Ans << endl;
}