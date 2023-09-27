#include <iostream>
using namespace std;
int main(void){
    int n;
    cin>>n;
    
    int cards[4][13];
    for(int suit = 0;suit<4;suit++){
        for(int num = 0;num<13;num++){
            cards[suit][num]=0;
        }
    }

    for(int i=0;i<n;i++)
    {
        char suit;
        int x;
        cin >> suit;
        cin >> x;
        switch(suit){
            case 'S':
                cards[0][x-1]=1;
                break;
            case 'H':
                cards[1][x-1]=1;
                break;
            case 'C':
                cards[2][x-1]=1;
                break;
            case 'D':
                cards[3][x-1]=1;
                break;
        }
    }
    for(int suit = 0;suit<4;suit++){
        for(int num = 0;num<13;num++){
            
            if(cards[suit][num]==0){
                switch(suit){
                    case 0:
                        cout << 'S' << " ";
                        break;
                    case 1:
                        cout << 'H' << " ";
                        break;
                    case 2:
                        cout << 'C' << " ";
                        break;
                    case 3:
                        cout << 'D' << " ";
                        break;
            }
            cout << (num+1) << endl;
                
            }
            
        }
    }
    

}