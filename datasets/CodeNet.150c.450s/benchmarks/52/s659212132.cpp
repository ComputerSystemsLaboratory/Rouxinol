#include <iostream>
#include <stack>

using namespace std;

int main(){
    int n;
    stack <int> inp;

    while(std::cin >> n){
        if(n != 0){
            inp.push(n);
        } else {
            std::cout << inp.top() << std::endl;
            inp.pop();
        }
    }
}