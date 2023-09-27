  #include <iostream>
  #include <string>
  using namespace std;

  typedef struct{
    char mark;
    int  number;
  }card;

  void BubbleSort(card*,int);
  void SelectionSort(card*,int);
  void output(card*,int,int);
  void cardcopy(card*,card*,int);

  int main(void){

    int datanum;
    card* databuff;
    card* bubblebuff;
    card* selectionbuff;
    string input;

    cin >> datanum;

    databuff = new card[datanum];
    bubblebuff = new card[datanum];
    selectionbuff = new card[datanum];

    for ( int i = 0 ; i < datanum ; i++){
      cin >> input;
      databuff[i].mark = input[0];
      databuff[i].number = (int)(input[1] - '0');
    }

    cardcopy(databuff,bubblebuff,datanum);
    BubbleSort(bubblebuff,datanum);
    cardcopy(databuff,selectionbuff,datanum);
    SelectionSort(selectionbuff,datanum);

  }

  void BubbleSort(card* databuff,int datanum){
    card temp;

    for ( int i = 0 ; i < datanum ; i++){
      for ( int j = datanum - 1 ; j > i ; j--){
        if ( databuff[j].number < databuff[j-1].number){
          temp = databuff[j-1];
          databuff[j-1] = databuff[j];
          databuff[j] = temp;
        }
      }
    }

    output(databuff,datanum,1);
  }

  void SelectionSort(card* databuff,int datanum){
    int min;
    int stableflag;
    card temp;

    stableflag = 1;

    for ( int i = 0 ; i < datanum ; i++){
      min = i;

      for ( int j = i ; j < datanum ; j++){
        if ( databuff[j].number < databuff[min].number){
          min = j;
        }
      }

      if( i != min){
        int check;
        check = i + 1;
        while(check < min){
          if (databuff[check].number == databuff[i].number){stableflag = 0;}
          check++;
        }

        temp = databuff[min];
        databuff[min] = databuff[i];
        databuff[i] = temp;
      }
    }

    output(databuff,datanum,stableflag);
  }

  void output(card *databuff,int datanum,int stableflag){

    string output;
    for ( int i = 0 ; i < datanum ; i++){
      //output[0] = databuff[i].mark;
      //output[1] = databuff[i].number;
      cout << databuff[i].mark << databuff[i].number;

      if ( i < datanum - 1){
        cout << " ";
      }else{
        cout << endl;
      }
    }
    if(stableflag == 1){
      cout << "Stable" << endl;
    }else{
      cout << "Not stable" << endl;
    }

  }

  void cardcopy(card* base,card* next,int datanum){

    for ( int i = 0 ; i < datanum ; i++){
      next[i].mark = base[i].mark;
      next[i].number = base[i].number;
    }
  }