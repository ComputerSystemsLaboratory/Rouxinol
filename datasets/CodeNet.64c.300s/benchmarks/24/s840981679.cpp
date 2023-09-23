#include<cstdio>
///#include<iostream>
using namespace std;

int main ()
{
while  (true)
  {
  int loop,vna,vnb;
  scanf("%d",&loop);
  if (loop == 0)
    {
	break;
	  };
  vna=0;
  vnb=0;
  for (int i=0;i<loop;i++)
    {
      int vn2,vn3;
      scanf("%d",&vn2);
      scanf("%d",&vn3);
      if (vn2 > vn3)
	{
	  vna = vna + vn2 + vn3;
	    };
      if (vn2 < vn3)
	{
	  vnb = vnb + vn2 + vn3;
	    };
      if(vn2 == vn3)
	{
	  vna = vna + vn2;
	  vnb = vnb + vn3;
	};
    };
  printf ("%d %d\n",vna,vnb);


 };

}