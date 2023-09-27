#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Card
{
    char Name;
    int  Value;
};

int Partition(std::vector<Card>& List, int p, int r);
void Quicksort(std::vector<Card>& List, int p, int r);
string IsStable(vector<Card> Org, vector<Card> After);

int Partition(std::vector<Card>& List, int p, int r)
{
    int x = List[r].Value;
    int i = p - 1;
    Card Temp;
    
    for(int j = p; j < r; j++){
        if(List[j].Value <= x){
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

void Quicksort(std::vector<Card>& List, int p, int r)
{
    if(p < r){
       int q = Partition(List, p, r);
       
       Quicksort(List, p, q - 1);
       Quicksort(List, q + 1, r);
    }
}

string IsStable(vector<Card> Org, vector<Card> After)
{
    for(int i = 0; i < Org.size(); i++){
        for(int j = i + 1; j < Org.size(); j++){
            if(Org[i].Value != Org[j].Value)    continue;
            for(int a = 0; a < Org.size(); a++){
                if(Org[j].Name != After[a].Name) continue;
                if(Org[j].Value != After[a].Value)  continue;
                for(int b = a + 1; b < Org.size(); b++){
                    if(Org[i].Name == After[b].Name 
                    && Org[i].Value == After[b].Value){
                        return "Not stable";
                    }
                }
            }
        }
    }
    return "Stable" ;
}

int main(void){
    int Num;
    std::cin >> Num;
    
    std::vector<Card> Org, After;
    Org.clear();
    for(int i = 0; i < Num; i++){
        Card Temp;
        std::cin >> Temp.Name;
        std::cin >> Temp.Value;
        Org.push_back(Temp);
    }
    
    After = Org;
    Quicksort(After, 0, After.size() - 1);
    
    std::cout << IsStable(Org, After) << std::endl;
    
    for(int i = 0; i < After.size(); i++){
        std::cout << After[i].Name << " " << After[i].Value << std::endl;
    }
}