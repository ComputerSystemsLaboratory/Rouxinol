#include<stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <sstream>
#include<math.h>
#include <algorithm>
using namespace std;



int main(void)
{
  int i=0;
  int aiTable[5];
  int v[5];

cin>>aiTable[0]>>aiTable[1]>>aiTable[2]>>aiTable[3]>>aiTable[4];
 sort(aiTable, aiTable + 5);

for(i=0;i<5;i++)
{
v[4-i]=aiTable[i];
}

for(i=0;i<5;i++)
    {
	cout<<v[i];
	if(i<4){cout<<" ";}
    }
cout<<endl;
}