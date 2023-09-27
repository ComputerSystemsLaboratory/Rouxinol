#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void){
    int a,b;
    int result;
    vector<int> vresult;
    string op;

    while(1){
        cin >> a;
        cin >> op;
        cin >> b;

        if(op == "+")
          result = a+b;
        else if(op == "-")
          result = a-b;
        else if(op == "*")
          result = a*b;
        else if(op == "/")
          result = a/b;
        else if(op == "?")
            break;
        vresult.push_back(result);
    }
    for(auto x : vresult)
        cout << x << endl;
}
