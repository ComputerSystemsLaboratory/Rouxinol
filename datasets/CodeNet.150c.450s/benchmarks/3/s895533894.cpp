#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main (){
	string str;
	int i;
	cin>>str;
	cin>>i;
	while (i--){
	string A,B;
	int X,Y;
		cin >> A >> X >> Y;
		if(A=="replace"){cin>>B;str.replace(str.begin()+X,str.begin()+Y+1,B);}else
		if (A=="reverse"){reverse(str.begin()+X,str.begin()+Y+1);}else
		{for(int gg=X;gg<=Y;gg++){cout<<str.at(gg);}cout<<endl;}
	}
	return 0;
}

/*switch(A){
			case "replace":cin>>B;str.replace(X,Y,B);break;
			//case "reverse":reverse(str.X,str.Y);break;
			case "print":for(int gg=X;gg<=Y;gg++){cout<<str.at(gg);}cout<<endl;break;		
		}*/