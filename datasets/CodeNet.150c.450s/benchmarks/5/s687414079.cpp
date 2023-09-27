#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int num;
    cin >> num;

    int buf;
    vector<int> hugaa;
    for (int a = 0; a < num; ++a) {
        cin >> buf;
        hugaa.push_back(buf);
    }

    auto st = hugaa.end();
    --st;
    
    while(1){
        if(st != hugaa.begin()){
            cout << *st << " ";
            --st;
        }else{
            cout << *st << endl;
            break;
        }
    }

    return 0;
}