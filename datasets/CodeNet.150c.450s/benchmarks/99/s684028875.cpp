#include <iostream>
#include <string>
#include <vector>

using namespace std;

int mtoi( string str );
string itom( int sumi );

int main(int argc, char const *argv[]) {
    int n, sumi;
    string first, second, sum_str;
    vector<string> results;

    cin>>n;
    for (int i = 0; i < n; i++) {
        cin>>first>>second;
        sumi  = mtoi( first ) + mtoi( second );
        sum_str = itom( sumi );
        results.push_back( sum_str );
    }

    for(auto it = results.begin(); it != results.end(); it++){
        cout<<*it<<endl;
    }

    return 0;
}

int mtoi( string str ){
    int str_num = 1;
    int result = 0;

    for(int i = 0; i < str.size(); i++ ){
        if( i > 0 && ( 9 < (str[i-1] - '0') ||  (str[i-1] - '0') < 2 ) ) str_num = 1;
        switch (str[i]) {
            case 'm': result += str_num * 1000; break;
            case 'c': result += str_num * 100; break;
            case 'x': result += str_num * 10; break;
            case 'i': result += str_num * 1; break;
            default : str_num = str[i] - '0';
        }
    }
    return result;
}

string itom( int sumi ){
    string str;
    int divi = 1000;
    int tmp;
    for( int i = 0; i < 4; i++ ){
        tmp = sumi / divi;
        sumi -= tmp * divi;
        divi /= 10;
        if(tmp==0) continue;
        switch (i) {
            case 0 :
                if( tmp > 1 ) str.push_back( tmp + '0' );
                str.push_back('m'); break;
            case 1 :
                if( tmp > 1 ) str.push_back( tmp + '0' );
                str.push_back('c'); break;
            case 2 :
                if( tmp > 1 ) str.push_back( tmp + '0' );
                str.push_back('x'); break;
            case 3 :
                if( tmp > 1 ) str.push_back( tmp + '0' );
                str.push_back('i'); break;
        }
    }
    return str;
}