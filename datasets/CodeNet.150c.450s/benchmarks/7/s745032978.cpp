#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>mountain(10);
    for(int i = 0; i < 10; i++){
      cin >> mountain.at(i);
    }
    sort(mountain.begin(), mountain.end());
    reverse(mountain.begin(), mountain.end());

    for(int i = 0; i < 3; i++){
      cout << mountain.at(i) <<endl;
    }
}

