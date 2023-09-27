#include <iostream>
#include <string>
using namespace std;
struct shai{
	int num[7];
}; 

int main() {
	struct shai s;
	int book[105];
	for(int i=1;i<=6;i++){
		cin>>s.num[i];
		book[s.num[i]]=i;
	}
	
	int n;
	cin>>n;
	while(n--){
		int shang,qian;
		cin>>shang>>qian;
		switch(book[shang]){
			case 1:
				switch(book[qian]){
					case 2:
						cout<<s.num[3]<<endl;
						break;
					case 3:
						cout<<s.num[5]<<endl;
						break;
					case 4:
						cout<<s.num[2]<<endl;
						break;
					case 5:
						cout<<s.num[4]<<endl;
						break;
					default:
						break;
				}
				break;
			case 2:
				switch(book[qian]){
					case 1:
						cout<<s.num[4]<<endl;
						break;
					case 3:
						cout<<s.num[1]<<endl;
						break;
					case 4:
						cout<<s.num[6]<<endl;
						break;
					case 6:
						cout<<s.num[3]<<endl;
						break;
					default:
						break;
				}
				break;
			case 3:
				switch(book[qian]){
					case 1:
						cout<<s.num[2]<<endl;
						break;
					case 2:
						cout<<s.num[6]<<endl;
						break;
					case 5:
						cout<<s.num[1]<<endl;
						break;
					case 6:
						cout<<s.num[5]<<endl;
						break;
					default:
						break;
				}
				break;
			case 4:
				switch(book[qian]){
					case 1:
						cout<<s.num[5]<<endl;
						break;
					case 2:
						cout<<s.num[1]<<endl;
						break;
					case 5:
						cout<<s.num[6]<<endl;
						break;
					case 6:
						cout<<s.num[2]<<endl;
						break;
					default:
						break;
				}
				break;
			case 5:
				switch(book[qian]){
					case 1:
						cout<<s.num[3]<<endl;
						break;
					case 3:
						cout<<s.num[6]<<endl;
						break;
					case 4:
						cout<<s.num[1]<<endl;
						break;
					case 6:
						cout<<s.num[4]<<endl;
						break;
					default:
						break;
				}
				break;
			case 6:
				switch(book[qian]){
					case 2:
						cout<<s.num[4]<<endl;
						break;
					case 3:
						cout<<s.num[2]<<endl;
						break;
					case 4:
						cout<<s.num[5]<<endl;
						break;
					case 5:
						cout<<s.num[3]<<endl;
						break;
					default:
						break;
				}
				break;
			default:
				break;	
		}
	} 

	return 0;
}