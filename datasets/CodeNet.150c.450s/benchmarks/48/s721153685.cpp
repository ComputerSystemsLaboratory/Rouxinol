#include <bits/stdc++.h>
using namespace std;

int main(){

	  while(1){
			int e; cin >> e;
			if(!e) break;
			/*
			int mini = e;
			for(int x=0; x<=e; x++){
				  for(int y=0; y*y<=e; y++){
						for(int z=0; z*z*z<=e; z++){
							  if(x + y*y + z*z*z == e)
									mini = min(mini,x+y+z);
						}

				  }
			}
			*/
			int mini = e;
			for(int z=0; z*z*z<=e; z++){
				  for(int y=0; z*z*z + y*y<=e; y++){
						int x = e - z*z*z - y*y;
						mini = min(mini,x+y+z);	
				  }
			}
			
			
			cout << mini << endl;

	  }

}