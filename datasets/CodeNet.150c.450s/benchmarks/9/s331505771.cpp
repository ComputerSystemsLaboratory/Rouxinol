#include <iostream>
#include <string>

using namespace std;
int main(){
	string a ;
	int times,length,h;
	int cards[199];
	int temp[199];
	while(1){
			cin >> a;
			
			if(a == "-"){
				break;
			}
			
			cin >> times;
			length = a.size();
			for(int i = 0;i<length;i++){
				cards[i] = a[i];
	   			temp[i] = a[i];
			}//input end

			for(int i = 0;i<times;i++){
				
				cin >> h;
				
				for(int j = 0; j<length;j++){
						
					if(j>=length-h){
							cards[j]=temp[j-length+h];
						}
						
					else{
							cards[j]=temp[j+h];
						}
					
				
				}


				for(int j = 0;j<length;j++){
					
					temp[j]=cards[j];
				
				}
			}//shuffle end
			
			//output start
			for(int i = 0;i<length;i++){
				
				cout << (char)cards[i];
				
			
			}
			cout << "\n";
	}//while loop end

	


		return 0;
}