#include<iostream>
#include<string>
using namespace std;

char b1[5]={'.' , ',' , '!' , '?' , ' '};
char b2[3]={'a' , 'b' , 'c'};
char b3[3]={'d' , 'e' , 'f'};
char b4[3]={'g' , 'h' , 'i'};
char b5[3]={'j' , 'k' , 'l'};
char b6[3]={'m' , 'n' , 'o'};
char b7[4]={'p' , 'q' , 'r' , 's'};
char b8[3]={'t' , 'u' , 'v'};
char b9[4]={'w' , 'x' , 'y' , 'z'};

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		string in,out;
		cin>>in;
		int cnt=0;
		for(int i=0;i<in.size();i++)
		{
			if(in[i]==0&&cnt==0) continue;
			else if(in[i]!='0') cnt++;
			else
			{
				switch(in[i-1]){
					case '1':
						out+=b1[(cnt-1)%5];
						break;
					case '2':
						out+=b2[(cnt-1)%3];
						break;
					case '3':
						out+=b3[(cnt-1)%3];
						break;
					case '4':
						out+=b4[(cnt-1)%3];
						break;
					case '5':
						out+=b5[(cnt-1)%3];
						break;
					case '6':
						out+=b6[(cnt-1)%3];
						break;
					case '7':
						out+=b7[(cnt-1)%4];
						break;
					case '8':
						out+=b8[(cnt-1)%3];
						break;
					case '9':
						out+=b9[(cnt-1)%4];
						break;
				}
				cnt=0;
			}
		}
		cout<<out<<endl;
	}
	return 0;
}