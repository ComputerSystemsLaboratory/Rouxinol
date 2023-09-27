#include <iostream>
#include <vector>
#include <array>

class Point{
private:
    u_int x;
    u_int y;
public:
    Point(){ x = 0; y = 0;} //constructor
    Point(u_int a, u_int b){ x = a; y = b; } //constructor
    u_int get_x(){ return x; } //get x
    u_int get_y(){ return y; } //get y
};

class Street{
private:
    Point goal;
    std::array<std::array<bool, 16>, 16> uc_list; //under-construction, 2-dimention array
public:
    Street(u_int x, u_int y); //constructor
    void add_uc_place(u_int x, u_int y); //add the places under construction
    int get_conbination(); //get the conbination(output)
};

Street::Street(u_int x, u_int y){
    Point g(x - 1, y - 1);
    goal = g;
    for(int i = 0;i < 16;++i){
        for(int j = 0;j < 16;++j){
            uc_list.at(i).at(j) = true;
        }
    }
}
void Street::add_uc_place(u_int x, u_int y){
    uc_list.at(x-1).at(y-1) = false;
}
int Street::get_conbination(){
    std::array<std::array<int, 16>, 16> num; 
    int x = (int)goal.get_x(), y = (int)goal.get_y();
    for(int i = 0;i <= x;++i){
        for(int j = 0;j <= y;++j){
            if (uc_list.at(i).at(j) == false) {
                num.at(i).at(j) = 0;
            } else if (i == 0 && j == 0){
                num.at(i).at(j) = 1;
            } else if (i == 0){
                num.at(i).at(j) = num.at(i).at(j - 1);
            } else if (j == 0){
                num.at(i).at(j) = num.at(i - 1).at(j);
            } else {
                num.at(i).at(j) = num.at(i - 1).at(j) + num.at(i).at(j - 1);
            }
        }
    }
    return num.at(x).at(y);
}
int main(){
    u_int x, y, n, a, b;
    while(std::cin >> x >> y){
        if(x == 0 && y == 0){
            return 0;
        }
        Street s(x, y);
        std::cin >> n;
        for(int i = 0;i < n;i++){
            std::cin >> a >> b;
            s.add_uc_place(a, b);
        }
        std::cout << s.get_conbination() << std::endl;
    }
}
