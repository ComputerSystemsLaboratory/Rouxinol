#include <iostream>
#include <cstdlib>
using namespace std;

void print(int a, int b, char str[]);
void rev(int a, int b, char str[]);
void rep(int a, int b, char str[], char repstr[]);

int main()
{
	char str[1000];
	int orderlen;
	cin >> str;
	cin >> orderlen;
	cin.clear();
	cin.ignore();
	for(int i=0; i<orderlen; i++)
	{
		char orderstr[1000], buf[1100],
			pripar[3][8]={
				"print",
				"reverse",
				"replace"
		};
		int a, b, j=0;
		enum __ORDER{PRI, REV, REP, NONE} ORDER;
		cin.getline(buf, sizeof(buf));
		while(true){
			if(buf[j]==' '){
				bool print=true, replace=true, reverse=true;
				for(int k=0; k<j; k++){
					if(print) if(pripar[0][k] != buf[k]) print = false;
					if(reverse) if(pripar[1][k] != buf[k]) reverse = false;
					if(replace) if(pripar[2][k] != buf[k]) replace = false;
					if(!print && !reverse && !replace) break;
				}
				if(print){
					ORDER = PRI;
				} else if(reverse){
					ORDER = REV;
				} else if(replace){
					ORDER = REP;
				} else {
					ORDER = NONE;
				}
				j++;
				{
					int num=0;
					char numbuf[4]="   ";
					while(true){
						numbuf[num] = buf[j];
						num++;
						j++;
						if(buf[j]== ' ' || buf[j]=='\0') break;
					}
					a = atoi(numbuf);
					j++;
					num = 0;
					while(true){
						numbuf[num] = buf[j];
						num++;
						j++;
						if(buf[j]== ' ' || buf[j]=='\0') break;
					}
					b = atoi(numbuf);
					j++;
				}
				break;
			}
			j++;
		}
		if(ORDER == REP){
			int num = 0;
			while(true){
				if(buf[j]=='\0') break;
				orderstr[num] = buf[j];
				num++;
				j++;
			}
		}
		switch(ORDER){
		case PRI:
			print(a, b, str);
			break;
		case REV:
			rev(a, b, str);
			break;
		case REP:
			rep(a, b, str, orderstr);
			break;
		default:
			break;
		}
	}
	return 0;
}

void print(int a, int b, char str[])
{
	for(int i=a; i<=b; i++){
		cout << str[i];
	}
	cout << endl;
}
void rev(int a, int b, char str[])
{
	char tmp;
	for(int i=a, j=b; i<j; i++){
		tmp = str[i];
		str[i] =str[j];
		str[j] = tmp;
		j--;
	}
}
void rep(int a, int b, char str[], char repstr[])
{
	int i=0;
	for(int j=a; j<=b; j++){
		str[j] = repstr[i];
		i++;
	}
}