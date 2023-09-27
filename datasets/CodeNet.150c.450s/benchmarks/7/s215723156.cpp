#include <iostream>
#include <algorithm>
#include <queue>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    std::priority_queue<int> pq;
    for(int i=0; i<10; ++i){
        int input;
        std::cin >> input;
        pq.push(input);
    }
    for(int i=0; i<3; ++i){
        std::cout << pq.top() << "\n"; pq.pop();
    }
    return 0;
}