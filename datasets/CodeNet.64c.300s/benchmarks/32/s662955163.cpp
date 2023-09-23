#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    long long cases, num[10000], total = 0, largest, smallest;
    cin >> cases;
    for(int i = 0; i < cases; ++i){
        cin >> num[i];
    }
    largest = num[0];
    smallest = num[0];
    for(int i = 0; i < cases; ++i){
        total += num[i];
        if(num[i] > largest){
            largest = num[i];
        }
        if(num[i] < smallest){
            smallest = num[i];
        }
    }
    cout << smallest << " " << largest << " " << total << endl;
}