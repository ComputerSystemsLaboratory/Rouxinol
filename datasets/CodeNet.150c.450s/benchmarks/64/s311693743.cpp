#include <iostream>
#include <vector>
using namespace std;

void GetList(int Num, vector<int>& List);
bool Check(int Question, vector<int>& List, int Start, int Sum);

void GetList(int Num, vector<int>& List)
{
    List.clear();
    int Temp;
    
    for(int i = 0; i < Num; i++){
        std::cin >> Temp;
        List.push_back(Temp);
    }
}

bool Check(int Question, vector<int>& List, int Start, int Sum)
{
     if(Sum == Question){
            return true;
    } else if(Sum > Question){
            return false;
    }
    
    for(int i = Start; i < List.size(); i++){
        if(Check(Question, List, i+1, Sum+List[i]) == true) return true;
    }
    return false;
}

int main(void){
    int Num, QuestionNum;
    vector<int> List;
    vector<int> QuestionList;
    
    std::cin >> Num;
    GetList(Num, List);
    std::cin >> QuestionNum;
    GetList(QuestionNum, QuestionList);
    
    for(int i = 0; i < QuestionList.size(); i++){
        if(Check(QuestionList[i], List, 0, 0))   std::cout << "yes" << std::endl;
        else        std::cout << "no" << std::endl;
    }
}