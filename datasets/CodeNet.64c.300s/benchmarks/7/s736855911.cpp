#include<iostream>
using namespace std;

void output_remain(char mark, int *card)
{
	for(int i=0; i<13; i++){
        if(card[i] == 0)
		    cout << mark << " " << i+1 << endl;
	}
}

int main()
{
	int total;
	char mark;
	int num;
	int sp[13]={0};
	int di[13]={0};
	int cr[13]={0};
	int ha[13]={0};

	cin >> total;

    for(int i=0; i<total; i++){
	    cin >> mark >> num;
		num--;
		switch(mark){
		case 'S':
            sp[num] = 1;
			break;
		case 'D':
			di[num] = 1;
			break;
		case 'C':
			cr[num] = 1;
			break;
		case 'H':
			ha[num] = 1;
			break;
		}
	}

	output_remain('S', sp);
	output_remain('H', ha);
	output_remain('C', cr);
	output_remain('D', di);
	return 0;
}