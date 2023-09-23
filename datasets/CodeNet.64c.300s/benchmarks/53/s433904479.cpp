#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char* argv[])
{
    int fromNum, toNum, target;
    cin >> fromNum >> toNum >> target;
    
    int count = 0;

    for(int i = fromNum; i <= toNum; i++)
    {
        if(target%i == 0) count++;
    }
    cout << count <<endl;
}