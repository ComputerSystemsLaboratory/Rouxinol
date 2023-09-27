#include <iostream>
#include <vector>

bool check(int ans, std::vector<int>::iterator iter, std::vector<int>::iterator enditer) {
    if (ans == 0) {
        return true;
    } else if (ans < 0) {
        return false;
    }
   
    if (iter == enditer) {
        return false;
    }
    
    bool result = check(ans, std::next(iter, 1), enditer) || check(ans-=(*iter), std::next(iter, 1), enditer);
    return result;
}

int main() {
    int N, Q, temp;
    std::vector<int> A;
    std::cin >> N;
    
    for (int i=0; i<N; i++) {
        std::cin >> temp;
        A.push_back(temp); 
    }
    
    std::cin >> Q;
    
    auto b = A.begin();
    auto e = A.end();
    
    for (int i=0; i<Q; i++) {
        std::cin >> temp;
        if (check(temp, b, e)) {
            std::cout << "yes" << std::endl;
        } else {
            std::cout << "no" << std::endl;
        }
    }
}
