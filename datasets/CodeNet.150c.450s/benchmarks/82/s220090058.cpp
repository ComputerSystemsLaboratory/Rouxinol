#include <iostream>

using namespace std;




class dice{
	private:
		int top;
		int front;
		int right;
		int left;
		int back;
		int bottom;
	public:
		dice();
		dice(int top,int front,int right,int left,int back,int bottom);
		void roll(char ch);
		//void changstatus(side new_top,side new_front);
		int gettop();
		int getfront();
		int getright();
		int getleft();
		int getback();
		int getbottom();
		void getallsides();
};

dice::dice(){
	this->top = 1;
	this->front = 2;
	this->right = 3;
	this->left = 4;
	this->back = 5;
	this->bottom = 6;

}

dice::dice(int top,int front,int right,int left,int back,int bottom){
	this->top=top;
	this->front=front;
	this->right=right;
	this->left=left;
	this->back=back;
	this->bottom=bottom;
}

void dice::roll(char ch){
	int temp;
	switch (ch){
		case 'E':
			temp = this->top;
			this->top = left;
			this->left = bottom;
			this->bottom = right;
			this->right = temp;
			break;
		case 'W':
			temp = this->top;
			this->top = right;
			this->right = bottom;
			this->bottom = left;
			this->left = temp;
			break;
		case 'S':
			temp = this->top;
			this->top = back;
			this->back = bottom;
			this->bottom = front;
			this->front = temp;
			break;
		case 'N':
			temp = this->top;
			this->top = front;
			this->front = bottom;
			this->bottom = back;
			this->back = temp;
			break;
	}
}

void dice::getallsides(){
	cout << top << " "<<front<<" "<<right<<" "<<left<<" "<<back<<" "<<bottom<<endl;
}

int dice::gettop(){
	return this->top;
}

int dice::getbottom(){
	return this->bottom;
}

int dice::getfront(){
	return this->front;
}

int dice::getback(){
	return this->back;
}

int dice::getleft(){
	return this->left;
}

int dice::getright(){
	return this->right;
}

/*

void dice::changstatus(){
	int
}
*/


int main(){

	int top,front,right,left,back,bottom;
	dice dice1,dice2;
	int count;
	int new_top,new_front;

	cin >>top>>front>>right>>left>>back>>bottom;

	dice1 = dice(top,front,right,left,back,bottom);


	cin >> count;

	string method[]={"","N","N","N","EN","WN"};
	string temp;
    bool flag;
	for(int k=0;k<count;k++){
		flag = false;
		cin >> new_top >> new_front;
        dice2 = dice1;
		for(int i=0;i<6;i++){
			temp=method[i];
			if(i==4||i==5){
				dice2 = dice1;
			}
			for(int j=0;j<temp.length();j++){
				dice2.roll(temp[j]);
			}

			for(int j=0;j<4;j++){
				dice2.roll('E');
				if(dice2.gettop()==new_top&&dice2.getfront()==new_front){
					flag = true;
					cout << dice2.getright()<<endl;
					break;
				}
			}

			if (flag==true){
				break;
			}
		}

	}

	return 0;
}

