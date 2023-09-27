#include<bits/stdc++.h>

int main(void){
    char st;
    int cnt = 0;
    int sum = 0;
    int j;
    std::stack<int> s1;
    std::stack<std::pair<int, int>> s2;
    while(std::cin >> st){
        int a = 0;
        if(st == '\\') s1.push(cnt);
        else if(st == '/'){
            if(s1.size() > 0){
                j = s1.top();
                s1.pop();
                sum += cnt - j;
                while(s2.size() > 0 && s2.top().first > j){
                    a += s2.top().second;
                    s2.pop();
                }
                a += cnt - j;
                s2.push(std::make_pair(j, a));
            }
        }
        cnt++;
    }
    std::cout << sum << std::endl;


    std::vector<int> di; 
    while(s2.size() > 0 ){
        di.push_back(s2.top().second);
        s2.pop();
    }

    std::reverse(di.begin(), di.end());
    int s2size = di.size();
    std::cout << s2size;
    if(s2size != 0) std::cout << " ";
    for(int i = 0; i < s2size; i++){
        std::cout << di[i];
        if(i != s2size -1){
            std::cout << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
