#include<iostream>
#include<cstdio>

using namespace std;

int cast(int val , int per)
{
	return val*(100+per)/100;
}

int main()
{

  while(1)
  {
	 int x,y,s;

	 cin >> x >> y >> s;
 
	 if(!x && !y && !s)break;

	 int a , b;//2つの商品の税抜き価格
	 int Max = 0;

	 for(a = 1;a <= s-1;a++)
	 {
		 for(b = 1;b <= s-1;b++)
		 {
			 if(cast(a,x)+cast(b,x) == s)
			 {
				 Max = max(cast(a,y)+cast(b,y),Max);
			 }
		 }
	 }

	 cout << Max << endl;

  }

  return 0;
}