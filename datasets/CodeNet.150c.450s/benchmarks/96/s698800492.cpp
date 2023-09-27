#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main(){
	char moji[10][6];
	strcpy(moji[1],".,!? ");
	strcpy(moji[2] ,"abc  ");
strcpy(moji[3], "def  ");
strcpy(moji[4],"ghi  ");
strcpy(moji[5],"jkl  ");
strcpy(moji[6],"mno  ");
strcpy(moji[7],"pqrs ");
strcpy(moji[8],"tuv  ");
strcpy(moji[9],"wxyz ");

	string str;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>str;
		int cnt=0;
		int num=0;
		for(int j=0;j<str.size();j++){
			if(str.at(j)=='0')continue;
			cnt=0;
			num=str.at(j)-'0';
			if(j==str.size()-2){
				cout<<moji[num][cnt];
				break;
			}

			while(str.at(j)==str.at(j+1)){
				cnt++;
				j++;
				if(j==str.size()-2){
					break;
				}
			}

			if(num==1){
				cnt%=5;
			}
			else if(num==7||num==9){
				cnt%=4;
			}
			else{
				cnt%=3;
			}

			cout<<moji[num][cnt];
		}
		cout<<endl;
	}
	return 0;
}