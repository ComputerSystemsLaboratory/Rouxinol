#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <algorithm>
#include <typeinfo>
#define _USE_MATH_DEFINES
#include <cmath>

using namespace std;

int main(){

    string s,t;
    cin >> s;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    int count_s=0;
    while(cin>>t){
        if(t=="END_OF_TEXT"){
            cout << count_s << endl;
            break;
        }else{
            transform(t.begin(),t.end(),t.begin(),::tolower);
            if(t==s){
                count_s += 1;            
            }
        }
    }
    return 0;
}

