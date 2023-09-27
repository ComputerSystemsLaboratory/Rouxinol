#include<iostream>
#include<string>


using namespace std;

int main()
{

        int a,b;
        string input;
        int size = 0;
        int count = 0;

        while(cin >> a >> b)
        {
                b += a;
                input = to_string(b);
                size = input.size();
                cout << size << endl;
                count++;
                if(count == 199){break;}
        }

}