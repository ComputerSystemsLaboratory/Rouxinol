#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int count( string str );
bool check( string str, vector<string> & sv);

int main(int argc, char const *argv[]) {
    int m, sum;
    string str;
    vector<int> v;

    cin>>m;
    for (int i = 0; i < m; i++) {
        cin>>str;
        sum = count( str );
        v.push_back( sum );
    }

    for(auto it = v.begin(); it != v.end(); it++){
        cout<<*it<<endl;
    }
    return 0;
}

int count( string str ){
    int n, m, scnt;
    int sum = 0;
    int size = str.size();
    string first, second, temp;
    vector<string> sv;
    scnt = size - 1;

    for (int i = 0; i < scnt; i++) {
        for(int j = 0; j < i + 1; j++ ) first.push_back( str[j] );
        for(int j = i+1; j < size; j++ ) second.push_back( str[j] );

        if(check( first + second, sv)) sv.push_back( first + second );
        if(check( second + first, sv)) sv.push_back( second + first );
        reverse(second.begin(), second.end());
        if(check( first + second, sv)) sv.push_back( first + second );
        if(check( second + first, sv)) sv.push_back( second + first );
        reverse(first.begin(), first.end());
        if(check( first + second, sv)) sv.push_back( first + second );
        if(check( second + first, sv)) sv.push_back( second + first );
        reverse(second.begin(), second.end());
        if(check( first + second, sv)) sv.push_back( first + second );
        if(check( second + first, sv)) sv.push_back( second + first );

        first.clear();
        second.clear();
    }
    return sv.size();;
}

bool check( string str, vector<string> &sv ){
    for (auto it = sv.begin(); it != sv.end(); it++) {
        if(*it == str ) return false;
    }
    return true;
}