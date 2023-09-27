#include <iostream>
#include <vector>


using namespace std;

int main()
{
    int a,b,c;

    vector<string> result;

    while(cin >> a >> b >> c){
        if(a == -1 && b == -1 && c == -1){
            break;
        }

        if(a == -1 | b == -1) result.push_back("F");
        else if(a + b >= 80) result.push_back("A");
        else if(a + b >= 65) result.push_back("B");
        else if(a + b >= 50) result.push_back("C");
        else if(a + b >= 30 && c >= 50) result.push_back("C");
        else if(a + b >= 30) result.push_back("D");
        else if(a + b < 30) result.push_back("F");
    }

    for(auto re : result){
        cout << re << endl;
    }


    return 0;
}