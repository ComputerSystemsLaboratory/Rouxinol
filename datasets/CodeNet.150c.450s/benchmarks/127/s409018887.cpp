#include <iostream>
#include <set>
#include <algorithm>

std::set<std::string> set;

int main(){
    int N;
    std::cin >> N;

    while(N--){
        std::string S;
        std::cin >> S;

        set.clear();
        
        int L = S.size();
        for(int i=1;i<L;i++){
            std::string s(S, 0, i), t(S, i);

            for(int j=0;j<2;j++){
                for(int k=0;k<2;k++){
                    set.insert(s + t);
                    set.insert(t + s);
                    std::reverse(s.begin(), s.end());
                }
                std::reverse(t.begin(), t.end());
            }
        }

        std::cout << set.size() << std::endl;
    }
}