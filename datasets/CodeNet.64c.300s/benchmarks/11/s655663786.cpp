#include <iostream>

int main(void){
    int S,h,m,s = 0;

    std::cin >> S;
    
    if((0 <= S) && (S < 86400)){
    
        s = S % 60;// 秒
        m = (S / 60) % 60;// 分
        h = S / 3600;// 時
    
    }
    
    std::cout << h << ":" << m << ":" << s << std::endl;
    
    return 0;

}
