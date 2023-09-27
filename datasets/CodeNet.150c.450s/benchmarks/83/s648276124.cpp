#include <iostream>
#include <algorithm>

using namespace std;

int values[101][10001] = {};
int N,W;

int main() {
    cin>>N>>W;
    for (int n = 1; n <= N; n++) {
        int value,weight;
        cin>>value>>weight;
        for (int w = 0; w <= W; w++) {
            if (w < weight) values[n][w] = values[n-1][w];
            else values[n][w] = max(values[n-1][w], values[n-1][w-weight]+value);
        }
    }
    cout<<values[N][W]<<endl;
}