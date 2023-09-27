#include <iostream>
#include <string>

using namespace std;

string str[50000];

string data;

int main(){

	int n;
	cin>>n;

	for(int i=0;i<n;i++){
		int ansNum=0;

		for(int j=0;j<50000;j++){
			str[j]="-1";
		}

		cin>>data;

		for(int i=1;i<data.size();i++){
			
			//前半文字列
			char beforeStr[80];
			char beforeRev[80];
			for(int j=0;j<i;j++){
				beforeStr[j]=data.at(j);
			}
			for(int j=0;j<i;j++){
				beforeRev[j] = beforeStr[i-j-1];
			}
			beforeStr[i] = '\0';
			beforeRev[i] = '\0';
			//後半文字列
			char afterStr[80];
			char afterRev[80];
			for(int j=i;j<data.size();j++){
				afterStr[j-i]=data.at(j);
			}
			for(int j=0;j<data.size()-i;j++){
				afterRev[j] = afterStr[data.size()-i-j-1];
			}

			afterStr[data.size()-i]='\0';
			afterRev[data.size()-i]='\0';

			string bTmp[2];
			string aTmp[2];

			bTmp[0] = beforeStr;
			bTmp[1] = beforeRev;
			aTmp[0] = afterStr;
			aTmp[1] = afterRev;

			/*
			cout<<beforeStr<<afterStr<<endl;
			cout<<beforeStr<<afterRev<<endl;
			cout<<beforeRev<<afterStr<<endl;
			cout<<beforeRev<<afterRev<<endl;
			cout<<afterStr<<beforeStr<<endl;
			cout<<afterStr<<beforeRev<<endl;
			cout<<afterRev<<beforeStr<<endl;
			cout<<afterRev<<beforeRev<<endl;
			*/

			for(int j=0;j<2;j++){
				for(int k=0;k<2;k++){
					string ans[2];
				       	ans[0]	= bTmp[j]+aTmp[k];
					ans[1]  = aTmp[k]+bTmp[j];

					for(int l=0;l<2;l++){
						int flag=0;
						for(int search=0;search<ansNum;search++){
							if(str[search]==ans[l]){
								flag=1;
								break;
							}
						}
						if(flag==0){
							str[ansNum]=ans[l];
							ansNum++;
						}
					}


				}
			}

		}
		cout<<ansNum<<endl;
	}
	return 0;
}