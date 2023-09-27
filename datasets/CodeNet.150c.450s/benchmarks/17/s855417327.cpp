#include <iostream>
#include <vector>

#define FOR(var, start, end)    for(var = start; var < end; ++var)
#define WHILE(var, end)  while(var != end)
#define SHOW_ALL(a, b, c)    cout << a << endl; \
                                cout << b << endl; \
                                cout << c << endl;

using namespace std;


void BubbleSort(vector <int> &num)
{
      int i, j, flag = 1;    // set flag to 1 to start first pass
      int temp;             // holding variable
      int numLength = num.size( ); 
      for(i = 1; (i <= numLength) && flag; i++)
     {
          flag = 0;
          for (j=0; j < (numLength -1); j++)
         {
               if (num[j+1] > num[j])      // ascending order simply changes to <
              { 
                    temp = num[j];             // swap elements
                    num[j] = num[j+1];
                    num[j+1] = temp;
                    flag = 1;               // indicates that a swap occurred.
               }
          }
     }
     return;   //arrays are passed to functions by address; nothing is returned
}

int main()
{
    int input;
    vector<int> input_array;
    while(cin >> input){
        input_array.push_back(input);
    }
    BubbleSort(input_array);
    printf("%d %d %d %d %d\n", input_array[0],input_array[1],input_array[2],input_array[3],input_array[4]);

    
}