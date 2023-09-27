#include<iostream>
#include<cstdio>

using namespace std;

int main()
{

  while(1)
  {
	 int n;

	 cin >> n;
 
	 if(n == 0)break;

	 int Max = 0; 
	 int Min = 1001;
	 int Sum = 0;

	 for(int i = 0;i < n;i++)
	 {
	   int tmp;
	   cin >> tmp;
	   Sum += tmp;
	   Max = max(tmp,Max);
	   Min = min(tmp,Min);
	 }

	 Sum = Sum - Max - Min; 

	 cout << Sum/(n-2) << endl;
  }

  return 0;
}