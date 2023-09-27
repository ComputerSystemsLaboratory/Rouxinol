#include <iostream>

using namespace std;

int main()
{
    int data[11];
    int temp;
    for(int a = 0;a<10;a++)
    {
        cin >> data[a];
        if(data[a]<0||data[a]>10000)return 0;
    }

    for(int x=0;x<10;x++)
    {
        for(int y=0;y<10;y++)
        {
            if(data[y]<data[y+1])
            {
                temp = data[y];
                data[y] = data[y+1];
                data[y+1] = temp;
            }
        }
    }
    cout << data[0] <<endl;
    cout << data[1] <<endl;
    cout << data[2] <<endl;
}