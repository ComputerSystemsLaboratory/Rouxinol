#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> v;
int hom;

int main(){
        while(cin >> hom){
                v.push_back(hom);
        }
        sort(v.begin(), v.end() );
        for(int i=v.size()-1;i>v.size()-4;i--){
                cout << v[i] << endl;
        }
}