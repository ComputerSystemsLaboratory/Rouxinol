#include<iostream>
using namespace std;

int main()
{
     int m, f, r, sum;
     while(1) 
     {
          cin >> m >> f >> r;
            if ( m == (-1) && f == (-1) && r == (-1) )break;
           else{
                            sum = m + f;
                            if ( m != (-1) && f != (-1) && sum >= 80)cout << "A";
                            if ( m == (-1) || f == (-1) )cout << "F";
                           else if ( m != (-1) && f != (-1) && sum >= 65 && sum < 80)cout << "B";
                            else if ( m != (-1) && f != (-1) && sum >= 50 && sum < 65)cout << "C";
                            else if ( m != (-1) && f != (-1) && sum >= 30 && sum < 50 && r >= 50 )cout << "C";
                            else if ( m != (-1) && f != (-1) && sum >= 30 && sum < 50 && r <= 50 )cout << "D";
                            else if ( m != (-1) && f != (-1) && sum < 30)cout << "F";
                  }
            cout << endl;
     }
return 0;
}