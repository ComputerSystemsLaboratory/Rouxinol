#include<iostream>
using namespace std;

int main()
{

  bool card[4][13];
  int n;

  int num; char c;

  for(int i=0; i<4; i++)
    for(int j=0; j<13; j++)
      card [i][j]=false;

  cin >> n;

  for(int i=0; i<n; i++){
    cin >> c >> num;

    if(c=='S')
      card[0][num-1] = true;
    else if(c=='H')
      card[1][num-1] = true;
    else if(c=='C')
      card[2][num-1] = true;
    else
      card[3][num-1] = true;

  }


  for(int i=0; i<4; i++){
    for(int j=0; j<13; j++){
      if(card[i][j]==false){

	if(i==0)  cout << "S " << j+1 << endl;
	
	else if(i==1)  cout << "H " << j+1 << endl;

	else if(i==2)  cout << "C " << j+1 << endl;

	else           cout << "D " << j+1 << endl;

      }
    }
  }


  return 0;
      
}