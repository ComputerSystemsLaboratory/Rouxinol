#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    vector<int> v;

    cin >> n;
    for(int i = 3; i <= n; i++){
        int x = i;
        if (x % 3 == 0) v. push_back(x);
        else{
            int y = x;
            while(y){
                if(y % 10 == 3){
                    v.push_back(x);
                    break;
                }
                y /= 10;
            }
        }
    }

    for(int i = 0; i < v.size(); i++){
        cout << " " << v[i] << flush;
    }
    cout << endl;

    return 0;
}