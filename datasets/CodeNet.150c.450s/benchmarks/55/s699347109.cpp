#include <iostream>
#include <string>

using namespace std;

int main(){
    string nums;
    cin >> nums;
    while(nums != "0"){
        int s=0;
        for(auto c:nums){
            s += c - '0';
        }
        cout << s <<endl;
        cin >> nums;
    }
}