#include <iostream>
using namespace std;


 int main (){
	 int n;
	 int card[4][13]={{0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0}};
	 cin >> n;
     //start import
	 for(int i=0;i<n;i++){
		char x;
		int y;
		cin >>x >> y;
		switch(x){
		case 'S':
			card[0][y-1] = 1;
			break;
		case 'H':
			card[1][y-1] = 1;
			break;
		case 'C':
			card[2][y-1] = 1;
			break;
		case 'D':
			card[3][y-1] = 1;
			break;
		}	 
	 }
     //end import
     //start output
	 for(int j=0;j<4;j++){
		 for(int k=0;k<13;k++){
			 if(card[j][k] == 0){
			  switch(j){
			  case 0:
				  cout <<"S"<<" "<<k+1<<"\n";
				  break;
			  case 1:
				  cout <<"H"<<" "<<k+1<<"\n";
				  break;
			  case 2:
			      cout <<"C"<<" "<<k+1<<"\n";
				  break;
			  case 3:
			      cout <<"D"<<" "<<k+1<<"\n";
			      break;


			 }
			 }
		 }
	 }
	//end output
	return 0;
}