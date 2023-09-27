#include <iostream>
#include <vector>


using namespace std;

int main()
{
    int a,b;

    vector<int> result;

    int temp = 0;
    while(cin >> a >> b){
        if(a == 0 && b == 0){
            break;
        }
        temp = 0;
        for (int c = 1; c <= a; ++c) {
            for (int d = c + 1; d <= a; ++d) {
                for (int e = d + 1; e <= a; ++e) {
                    if(c + d + e == b){
                        ++temp;
                    }
                }
            }
        }
        result.push_back(temp);
    }

    for(auto re : result){
        cout << re << endl;
    }

    return 0;
}