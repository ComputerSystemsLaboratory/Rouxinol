#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> v;
    int n;

    while (cin >> n)
    {
        if (n == 0){
            cout << v.back() << endl;
            v.pop_back();
        }
        else
        {
            v.push_back(n);
        }
    } 

    return 0;
}