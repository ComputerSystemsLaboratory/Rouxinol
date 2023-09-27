#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> input(3);
    cin >> input[0] >> input[1] >> input[2];
    sort(input.begin(), input.end());
    cout << input[0] << " " << input[1] << " " << input[2] << endl;
    return 0;
}