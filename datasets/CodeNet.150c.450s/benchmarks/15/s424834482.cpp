#include <iostream>
#include <vector>
using namespace std;

int main(void){
    int n, q, Number, count;
    bool Exist;
    vector<int> S;
    
    std::cin >> n;
    S.clear();
    for(int i = 0; i < n; i++){
        std::cin >> Number;
        if(S.empty()){
            S.push_back(Number);
        } else{
            Exist = false;
            for(int j = 0; j < S.size(); j++){
                if(Number == S[j]) Exist = true;   
            }
            if(Exist == false)  S.push_back(Number);
        }
    }
    
    std::cin >> q;
    count = 0;
    for(int i = 0; i < q; i++){
        std::cin >> Number;
        for(int j = 0; j < S.size(); j++){
            if(Number == S[j])  count++;
        }
    }
    
    std::cout << count << std::endl;
    
}