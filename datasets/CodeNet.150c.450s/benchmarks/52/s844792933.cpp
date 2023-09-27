#include <iostream>
#include <vector>

int main(){
    u_int a, end = 0;
    std :: vector<int> v = {};
    while(std :: cin >> a){
        if(a == 0){
            std :: cout << v.at(end-1) << std :: endl;
            v.pop_back();
            end--;
        } else{
            v.push_back(a);
            end++;
        }
    }
}
