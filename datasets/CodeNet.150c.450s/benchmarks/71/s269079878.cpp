#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int n;
   vector<int> r;
   while (scanf("%d",&n) != EOF)
   {
      int count=0;
      for (int a=0; (a<=n && a<10); a++)
      {
	 for (int b=0; (b<=n-a && b<10); b++)
	 {
	    for (int c=0; (c<=n-a-b && c<10); c++)
	    {
	       if (n-a-b-c<10)count++;
	    }
	 }
      }
      r.push_back(count);
   }
   for (int i=0; i<r.size(); i++)
   {
      cout << r[i] << endl;
   }
   return 0;
}