#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int N, A, B, C, X;

int solve(stringstream&& ss){
    int Y, pY = -1, F = -1;
    for(;ss>>Y && F<=10000; pY=Y, X=(A*X+B)%C, F++){
        for(;Y!=X && F<=10000; X=(A*X+B)%C, F++);
    }
    return 10000 < F? -1: F;
}

int main(){
    while(cin >> N >> A >> B >> C >> X, N|A|B|C|X){
        cin.ignore();
        string line;
        getline(cin, line);
        cout << solve(stringstream(line)) << '\n';
    }
    return 0;
}