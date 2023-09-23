#include <iostream>
using namespace std;

int main()
{
    int height, First,Second,Third,index;
    First = Second = Third = 0;

    for(index=0; index<10; index++)
   {
      cin >> height;

      if(height > First)
      {
           Third = Second;
           Second = First;
           First = height;
      }
      else if(height > Second && height <= First)
      {
          Third = Second;
          Second = height;
      }
      else if(height > Third && height <= Second)
          Third = height;
    }


    cout << First << endl << Second << endl << Third << endl;

    return 0;
}
 