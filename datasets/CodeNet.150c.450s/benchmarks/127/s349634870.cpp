#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int M = 0;
    cin>>M;
    for (int m = 0; m < M; m++) {
        string data = "";
        cin>>data;
        map<string,int> trains;
        trains[data] = 1;
        for (int i = 1; i < data.size(); i++) {
            string l1 = data.substr(0, i);
            string r1 = data.substr(i, data.size()-i);
            string l2 = l1;
            string r2 = r1;
            reverse(l2.begin(), l2.end());
            reverse(r2.begin(), r2.end());

            trains[l1+r2] = 1;
            trains[l2+r1] = 1;
            trains[l2+r2] = 1;
            trains[r1+l1] = 1;
            trains[r1+l2] = 1;
            trains[r2+l1] = 1;
            trains[r2+l2] = 1;
        }
        cout<<trains.size()<<endl;
    }
}