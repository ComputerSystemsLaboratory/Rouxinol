#include<iostream>

using namespace std;

int main()
{
	for(;;){
	int kane, sub, cont = 0;
	
	cin >> kane;
	if(kane == 0){
		break;
	}
	
	kane = 1000 - kane;
	sub = kane;
	for(;;){
		if(sub - 500>= 0){
			cont++;
			sub -= 500;
		}
		else{
			break;
		}
	}
//	cout <<"500:" << cont << endl;
	for(;;){
		if(sub - 100 >= 0){
			cont++;
			sub -= 100;
		}
		else{
			break;
		}
	}
//	cout <<"100:" <<cont<< endl;
	for(;;){
		if(sub - 50 >= 0){
			cont++;
			sub -= 50;
		}
		else{
			break;
		}
	}
	
//	cout << "50:" << cont << endl;
	for(;;){
		if(sub - 10 >= 0){
			cont++;
			sub -= 10;
		}
		else{
			break;
		}
	}

	for(;;){
		if(sub - 10 >= 0){
			cont++;
			sub -= 10;
		}
		else{
			break;
		}
	}

	for(;;){
		if(sub - 5 >= 0){
			cont++;
			sub -= 5;
		}
		else{
			break;
		}
	}
	
	for(;;){
		if(sub - 1 >= 0){
			cont++;
			sub -= 1;
		}
		else{
			break;
		}
	}
	
	cout << cont << endl;
}
}