#include <iostream>
#include <stdio.h>
#include <string.h>
#include <functional>
#include <algorithm>
#include <string>

using namespace std;

int main (void)
{
	string a,A;
	int n = 0;

	cin >> a;
   //cout << a;
	for (int i = 0;i < a.size(); i++) {
	        a[i] = tolower(a[i]);
	    }

   for (int s = 0; s < 1000 ;s++)
   {
    cin >> A;

    for (int i = 0; i < A.size(); i++)
    {
    	A[i] = tolower(A[i]);
    }
    if (A == "END_OF_TEXT")
    {
	   break;
    }

    if (A == a)
    {

	    n += 1;
    }
    //cout << A;
   }
    cout << n << endl;
}