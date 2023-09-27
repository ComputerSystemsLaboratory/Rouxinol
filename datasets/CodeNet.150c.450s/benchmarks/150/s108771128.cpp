#include <iostream>
#include <vector>
using namespace std;

void CountingSort(std::vector<int>& Input, std::vector<int>& Output, int Max);

int GetMax(std::vector<int>& Input);

void CountingSort(std::vector<int>& Input, std::vector<int>& Output, int Max)
{
    Output.clear();
    Output.resize(Input.size());
    std::vector<int> TempList;
    TempList.clear();
    
    for(int i = 0; i < Max + 1; i++){
        TempList.push_back(0);    
    }
    
    for(int i = 0; i < Input.size(); i++){
        TempList[Input[i]]++;
    }
    
    for(int i = 1; i < Max + 1; i++){
        TempList[i] = TempList[i] + TempList[i - 1];
    }

    for(int i = Input.size() - 1; i >= 0; i--){
        Output[TempList[Input[i]] - 1] = Input[i];
        TempList[Input[i]]--;
    }
}

int GetMax(std::vector<int>& Input)
{
    int Max;
    for(int i = 0; i < Input.size(); i++){
        if(i == 0){
            Max = Input[i];
        } else{
            if(Input[i] > Max)  Max = Input[i];
        }
    }
    return Max;
}

int main(void)
{
    int Num;
    std::cin >> Num;
    
    std::vector<int> List;
    List.clear();
    
    for(int i = 0; i < Num; i++){
        int Temp;
        std::cin >> Temp;
        List.push_back(Temp);
    }
    
    std::vector<int> Output;
    CountingSort(List, Output, GetMax(List));
    
    for(int i = 0; i < Output.size(); i++){
        if(i > 0)   std::cout << " ";
        cout << Output[i];
    }
    cout << endl;
    
}