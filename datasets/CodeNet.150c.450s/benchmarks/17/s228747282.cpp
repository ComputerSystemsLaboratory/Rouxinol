#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    string input;

    while(getline(cin, input)) {
        stringstream temp(input);

        int number;
        vector<int> vec;
        while(temp>>number) vec.push_back(number);

        sort( vec.rbegin(), vec.rend() );

        int size=vec.size();
        for(int i=0; i<size-1; i++) cout<<vec[i] <<" ";

        cout << vec[size-1] <<"\n";
    }
}