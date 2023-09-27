#include <iostream>
#include <string>
#include <sstream>
#include <vector>

int main(){
    using namespace std;

    int count = 0;
    string line;
    cin >> count;
    cin.ignore();
    getline( cin, line );

    istringstream stream( line );
    string field;
    vector<string> splitData;
    splitData.reserve( count );
    while( getline( stream, field, ' ' ) ){
        splitData.push_back( field );
    }

    if( splitData.size() == 0 ){ return 0; }

    long min   = 1000000;
    long max   = -1000000;
    long total = 0;
    for( const string& str : splitData ){
        int number = stoi( str );

        if( number < min ){ min = number; }
        if( number > max ){ max = number; }
        total += number;
    }

    cout << min << ' ' << max << ' ' << total << endl;
    
    return 0;
}