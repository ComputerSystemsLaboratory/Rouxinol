#include <iostream>
#include <vector>


using namespace std;

int main()
{
    vector<int> Result(26,0);

    char a;

    while(cin >> a){
        if(iswalpha(a)){
            int temp = tolower(a) - 'a';
            Result.at(temp) += 1;
        }
    }

    char c = 'a';
    for(auto b: Result){
        cout << c << " : " << b << endl;
        c++;
    }

}