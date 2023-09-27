#include <iostream>
#include <vector>

int main(){
    while(true){
        int n, m;
        std::vector<char> str;
        std::vector<std::pair<char, char> > change_list;

        std::cin >> n;
        if(n == 0)
            break;

        for(int i = 0; i < n; ++i){
            change_list.push_back(std::pair<char, char>(-1, -1));
            std::cin >> change_list[i].first >> change_list[i].second;
        }
        std::cin >> m;
//        std::cout << "debug: " << m << std::endl;
        for(int i = 0; i < m; ++i){
            char c;
            std::cin >> c;
            for(int j = 0; j < change_list.size(); ++j){
                if(c == change_list[j].first){
                    c = change_list[j].second;
                    break;
                }
            }
            str.push_back(c);
//            std::cout << "debug: " << "size: " << change_list.size() << " i: " << i << " c: " << c << std::endl;
        }
//        std::cout << "debug: loop end. str[0] : " << str[0] << std::endl;
        for(int j = 0; j < str.size(); ++j){
            std::cout << str[j];
        }
        std::cout << std::endl;
    }
    return 0;
}