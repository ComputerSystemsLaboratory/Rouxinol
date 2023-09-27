#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char* argv[])
{
    int input,count;
    vector<int> inputs;

    input = 1;

    while(input != 0)
    {
        cin >> input;
        if(input != 0)
        {
            inputs.push_back(input);
            count++;
        }
    }
    count = 1;
    for(auto value: inputs)
    {
        cout <<"Case "<< count << ": " << value << endl;
        count++;
    }
}