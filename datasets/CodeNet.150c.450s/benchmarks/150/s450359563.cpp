#include <iostream>
#include <array>
#include <vector>

using namespace std;

int main()
{
        vector< int > vec;
        int n, tmp;

        cin >> n;
        array< int, 10001 > arr;

        for ( int i = 0 ; i < 10001 ; i++ )
        {
                arr[i] = 0;
        }

        for ( int i = 0 ; i < n ; i++ )
        {
                cin >> tmp;
                arr[tmp]++;
        }

        /* Counting Sort */
        for ( int i = 0 ; i < 10001 ; i++ )
        {
                if ( arr[i] != 0 )
                {
                        tmp = i;
                        for ( int j = 0 ; j < arr[tmp] ; j++ )
                        {
                                vec.push_back( tmp );
                        }
                }
        }


        for ( int i = 0 ; i < n ; i++ )
        {
                if ( i != n - 1 )
                {
                        cout << vec[i] << " ";
                }
                else
                {
                        cout << vec[i] << endl;
                }

        }


        return 0;
}