#include <iostream>
#include <string>
void swap(int &a,int &b){
    int tmp=a;
    a=b;
    b=tmp;
}
void roll(int &dice1,int &dice2,int &dice3,int &dice4){
    swap(dice1,dice2);
    swap(dice2,dice3);
    swap(dice3,dice4);
}
using namespace std;
int main()
{
   int one[7];
    char ch;
    int sum=0;
    for(int i=1;i<=6;i++)
    cin>>one[i];
    while(true) {
            cin.get(ch);
            if(ch=='\n'&&sum!=0)
                break;
            if (ch == 'E')
                roll(one[1], one[4], one[6], one[3]);
            if (ch == 'N')
                roll(one[1], one[2], one[6], one[5]);
            if (ch == 'S')
                roll(one[1], one[5], one[6], one[2]);
            if (ch == 'W')
                roll(one[1], one[3], one[6], one[4]);
            sum++;
        }
    cout<<one[1]<<endl;
    return 0;
}
