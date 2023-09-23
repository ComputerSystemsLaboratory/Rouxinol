#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int a[5],i;
    for (i = 0; i < 5; i++) { cin >> a[i]; }
    if ((a[4] <= a[2] && a[2] <= a[0] - a[4]) && (a[4] <= a[3] && a[3] <= a[1] - a[4])){cout<<"Yes" << endl; }
    else { cout << "No"<<endl; }
    return 0;
}