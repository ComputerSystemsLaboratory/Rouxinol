#include <iostream>

bool is_right_triangle(const int a, const int b, const int c)
{
    bool ret;
    int aa;
    int bb;
    int cc;
    
    aa = a * a;
    bb = b * b;
    cc = c * c;
    
    if (aa + bb == cc || bb + cc == aa || cc + aa == bb){
        ret = true;
    }
    else {
        ret = false;
    }
    
    return ret;
}

int main()
{
    int n;
    int a;
    int b;
    int c;
    
    std::cin >> n;
    
    for (int i = 0; i < n; i++){
        std::cin >> a >> b >> c;
        if (is_right_triangle(a, b, c)){
            std::cout << "YES" << std::endl;
        }
        else {
            std::cout << "NO" << std::endl;
        }
    }
    
    return 0;
}