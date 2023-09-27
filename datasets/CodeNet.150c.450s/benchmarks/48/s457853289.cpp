#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int INF = 10000000;

int cast(int e)
{
	
	

	 int Min = INF;

	 for(int i = 0;i*i*i <= e;i++)
	 {
		 for(int j = 0;j*j <= e-i*i*i;j++)
		 {
			 int k = e - i*i*i - j*j;
			 if(k >= 0)
			 {
				Min = min(i+j+k,Min);
			 }else
			 {
				 break;
			 }
		 }
	 }


	return Min;
}


int main()
{

  while(1)
  {
	 int e;

	 cin >> e;
 
	 if(!e)break;
	
	 cout << cast(e) << endl;

  }

  return 0;
}