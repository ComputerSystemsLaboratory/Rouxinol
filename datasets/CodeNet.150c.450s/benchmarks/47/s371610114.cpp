#include <iostream>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int w, h, x, y, r;
    std::cin >> w >> h >> x >> y >> r;
    std::cout << ((x>=r && x<=w-r && y>=r && y<=h-r)?"Yes\n":"No\n");
    return 0;
}