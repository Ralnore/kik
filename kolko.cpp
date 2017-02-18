#include <iostream>
using namespace std;
int plansza[2][2];
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
    
  }
int main(){
  wypelnijTablice();
  rysujPlansze();
  return 0;
}
