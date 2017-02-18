#include <iostream>
using namespace std;

void rysujPlansze(char plansza[][]){
  for(int i=1;i<=3;i++){
    for(int j=1;j<=3;j++){
      cout<<" "<<plansza[i][j]<<" ";
    }
  }

}

int main(){
  rysujPlansze(plansza);
  return 0;
}
