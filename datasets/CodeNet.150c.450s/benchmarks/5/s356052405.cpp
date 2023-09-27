#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char* argv[])
{
    int num;
    int input;
    vector<int> inputs;
    cin >> num;
    for(int i=0;i<num;i++)
    {
        cin >> input;
        inputs.push_back(input);
    }
    for(int i=0;i<num;i++)
    {
        cout << inputs[num - 1 - i];
        if(i!=num-1)
        {
            cout << ' ';
        }
        else
        {
            cout <<endl;
        }
    }
}