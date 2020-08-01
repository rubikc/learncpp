#include <iostream>
using namespace std;
#if 0
int bound=10000;
int total=30;
#else
int bound=128;
int total=8;
#endif
bool guess(int a){
    if (a < 1 && a >bound){
        cout<<"invalid number"<<endl;
        return false;
    }
    cout<<"geuss more than "<<total<<" times loss"<<endl;
    int count=0;
    while (true){
      int n ;
      cout<< "input number"<<endl;
      cin>>n;
      count++;

      if (n==a){
         cout<<"your guess is right"<< endl;
         break;
     } else if (a<n) {
	cout<<"is too big"<<endl;
     } else{
          cout<<"your guess is too small"<<endl; 
      }
    }
    cout<<"you guess the number in"<<count <<"times"<<endl; 
    if (count< total){
    	return true;
    }
    return false;
}
int main (){
    bool win;
    win=guess(527); 

   if (win) {
	cout<<"you win"<<endl;
   } else {
      cout <<"you lose"<<endl;
   }
}
