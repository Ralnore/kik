#include <iostream>
using namespace std;
char jakiZnak;
int jakiePole;
int plansza[2][2];
char znaki[2]={'X','O'};
void wyborZnaku(){
    cout<<"Jezeli chcesz grać krzyżykiem wciśnij X, jeżeli kółkiem wciśnij O";
      cin>>jakiZnak;
      if(jakiZnak=='X')
        cout<<"Grasz Iksem"<<endl;
      else if(jakiZnak=='O')
        cout<<"Grasz kolkiem"<<endl;
      else
        cout<<"Nie ma takiego znaku. Wypierdalaj";
}

void wypelnijTablice(){
  int temp=1;
  for(int i=0;i<3;i++)
    for(int j=0;j<3;j++){
      plansza[i][j]=temp;
      temp=temp+1;
    }
}

void rysujPlansze()
{
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      cout<<"|__"<<plansza[i][j]<<"__|";
    }
  cout<<endl;
  }
}
  void ruchGracza(){
    cout<<"Podaj numer pola"<<endl;
    cin>>jakiePole;
    if(jakiePole<=3)
      plansza[0][jakiePole-1]=jakiZnak;
    else if(jakiePole<=6 && jakiePole>=4)
      plansza[1][jakiePole-4]=jakiZnak;
    else if(jakiePole<=9 && jakiePole>=7)
      plansza[2][jakiePole-7]=jakiZnak;


  }
int main(){
  wyborZnaku();
  wypelnijTablice();
  while(1){
  rysujPlansze();
  ruchGracza();
}
  return 0;
}
