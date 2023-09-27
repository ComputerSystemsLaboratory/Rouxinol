#include <iostream>
#include <vector>
using namespace std;
struct TMenseki{
    int Point;
    int Menseki;
};

int Calculation(string str, vector<TMenseki>& MensekiList);

int Calculation(string str, vector<TMenseki>& MensekiList)
{
    int TotalMenseki = 0;
    vector<int> List;
    List.clear();
    
    TMenseki Temp;
    MensekiList.clear();
    
    for(int i = 0; i < str.size(); i++){
        if(str[i] == '\\')  List.push_back(i);
        if(str[i] == '/' && !List.empty()){
            Temp.Menseki = i - List[List.size() - 1];
            Temp.Point = List[List.size() - 1];
            TotalMenseki += Temp.Menseki;
            for(int j = MensekiList.size() - 1; j >= 0; j--){
                if(Temp.Point < MensekiList[j].Point){
                    Temp.Menseki += MensekiList[j].Menseki;
                    vector<TMenseki>::iterator it = MensekiList.end();
                    it--;
                    MensekiList.erase(it);
                }
            }
            MensekiList.push_back(Temp);
            vector<int>::iterator it = List.end();
            it--;
            List.erase(it);
        }
    }
    return TotalMenseki;
}

int main(void){
    string str;
    std::cin >> str;
    
    std::vector<TMenseki> MensekiList;
    cout << Calculation(str, MensekiList) << endl;
    
    cout << MensekiList.size();
    for(int i = 0; i < MensekiList.size(); i++){
        cout << " " << MensekiList[i].Menseki;
    }
    cout << endl;
}