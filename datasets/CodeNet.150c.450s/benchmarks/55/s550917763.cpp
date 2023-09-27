#include <iostream>
#include <vector>


using namespace std;

int main()
{
    vector<int> Result;
    string temp;
    while(cin >> temp){
        if(temp == "0"){
            break;
        }

        int tempnum = 0;

        for(auto temps : temp){
            tempnum += temps - '0';
        }
        Result.push_back(tempnum);
    }

    for(auto b:Result){
        cout << b << endl;
    }
}