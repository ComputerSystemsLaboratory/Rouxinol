#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{int up,north,west,east,south,down,temp;
 cin>> up>>south>>east>>west>>north>>down;
  //for(int i=1;i<=n;i++)
  //{ 
  	string b;
  	cin>>b;
  	for(int i=0;i<b.size();i++)
  	{ 
	  
  	if(b[i]==78)
	  {
		temp=up;
		up=south;
		south=down; 
		down=north;
		north=temp;
	
	  }
    if(b[i]==87)
		{
		temp=up;
		up=east;
		east=down;
		down=west;
		west=temp;	
		}
    if(b[i]==83)
	 	{
		temp=up;
		up=north;
		north=down;
		down=south;
		south=temp;

		}
    if(b[i]==69)
		{
		temp=up;	
		up=west;
		west=down;
		down=east;
		east=temp;
		}
	}
  	
  //}
  cout<<up<<endl;
//}	
	
		return 0;
}
