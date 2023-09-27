#include <iostream>
#include <algorithm>
#include <string>
#include <array>

class dice{
public:
    using val_t = unsigned;
    explicit dice(const std::array<val_t,6>& a):v(a){}
    void mov(const char c){
        val_t buf;
        switch(c){
            case 'N':{
                buf = v[0];
                v[0] = v[1];
                v[1] = v[5];
                v[5] = v[4];
                v[4] = buf;
                break;
            }
            case 'E':{
                buf = v[0];
                v[0] = v[3];
                v[3] = v[5];
                v[5] = v[2];
                v[2] = buf;
                break;
            }
            case 'W':{
                buf = v[0];
                v[0] = v[2];
                v[2] = v[5];
                v[5] = v[3];
                v[3] = buf;
                break;
            }
            case 'S':{
                buf = v[0];
                v[0] = v[4];
                v[4] = v[5];
                v[5] = v[1];
                v[1] = buf;
                break;
            }
        }
    }
    val_t top(){
        return v[0];
    }
private:
    std::array<val_t,6> v;
};

int main(){
    std::array<dice::val_t,6> in;
    for(auto &v : in) std::cin >> v;

    dice d(in);

    std::string s;
    std::cin >> s;
    for(auto &&v : s){
        d.mov(v);
    }
    std::cout << d.top() << std::endl;
}