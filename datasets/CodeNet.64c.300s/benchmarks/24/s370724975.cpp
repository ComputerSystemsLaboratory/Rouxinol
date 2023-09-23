#include <iostream>

int main(){
	std::ios::sync_with_stdio(false);
    while(true){
    int n, a_score = 0, b_score = 0;
    std::cin >> n;
    
    if(n == 0)
        break;

    for(int i = 0; i < n; ++i){
        int a, b;
        std::cin >> a >> b;
        if(a > b)
            a_score += a + b;
        else if(a < b)
            b_score += a + b;
        else
            a_score += a, b_score += b;
    }

    std::cout << a_score << " " << b_score << std::endl;
    }
    return 0;
}