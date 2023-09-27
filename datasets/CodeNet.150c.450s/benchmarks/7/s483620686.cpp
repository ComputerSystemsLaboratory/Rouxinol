#include <iostream>

using namespace std;

int main()
{
    int data[10];
    for( int i =0; i< 10 ; i++ )
    {
        cin>>data[i];
    }

    for( int i =9; i>=7; i--)
    {
        for(int j = 0; j< i; j ++)
        {
            if( data[j] > data[j+1])
            {
                int tmp;
                tmp = data[j];
                data[j] = data[j+1];
                data[j+1] =tmp;
            }
        }
    }
    for (int i = 9; i >= 7; i--)
    {
        cout<<data[i]<<endl;
    }

    return 0;
}