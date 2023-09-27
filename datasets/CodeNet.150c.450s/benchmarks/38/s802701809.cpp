#include <iostream>
 
inline bool is_right_triangle(const u_int a, const u_int b, const u_int c) {
    return (a*a == b*b + c*c || b*b == c*c + a*a || c*c == a*a + b*b);
}
 
int main(void) {
    u_int n;
    std::cin >> n;
    
    for (u_int i = 0; i < n; ++i) {
        u_int a, b, c;
        std::cin >> a >> b >> c;
        std::cout << (is_right_triangle(a, b, c) ? "YES" : "NO") << std::endl;
    }
 
    return 0;
}