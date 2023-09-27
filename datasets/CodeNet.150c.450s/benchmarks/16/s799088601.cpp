#include <iostream>
#include <vector>
using namespace std;
struct TArea{
    int Point;
    int Area;
};

int GetArea(string str, vector<TArea>& AreaList);

int GetArea(string str, vector<TArea>& AreaList)
{
    int TotalArea = 0;
    TArea Temp;
    vector<int> List;
    List.clear();
    AreaList.clear();
    
    for(int i = 0; i < str.size(); i++){
        if(str[i] == '\\')  List.push_back(i);
        if(str[i] == '/' && !List.empty()){
            Temp.Area = i - List[List.size() - 1];
            Temp.Point = List[List.size() - 1];
            TotalArea += Temp.Area;
            for(int j = AreaList.size() - 1; j >= 0; j--){
                if(Temp.Point < AreaList[j].Point){
                    Temp.Area += AreaList[j].Area;
                    AreaList.pop_back();
                }
            }
            AreaList.push_back(Temp);
            List.pop_back();
        }
    }
    return TotalArea;
}

int main(void){
    string str;
    std::cin >> str;
    
    std::vector<TArea> AreaList;
    cout << GetArea(str, AreaList) << endl;
    
    cout << AreaList.size();
    for(int i = 0; i < AreaList.size(); i++){
        cout << " " << AreaList[i].Area;
    }
    cout << endl;
}