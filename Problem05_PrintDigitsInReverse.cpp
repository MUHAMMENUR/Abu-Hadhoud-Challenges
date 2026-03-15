#include <iostream>
using namespace std;

// --- Function to Read Data ---
int ReadInformation(string message){
     int number=0;
  do
  {
   
    cout<<message<<endl;
    cin>>number;
    
  } while (number<0);
  return number;
   
    
}
void PrintDigitsInReverse(int number){
   int remainder=0;
   while (number>0)
   {
    remainder=number%10;
    cout<<remainder<<endl;
    number=number/10;
   }
   

}

int main(){
   int UserNumber= ReadInformation("Please Enter a positive number:");
   PrintDigitsInReverse(UserNumber);
return 0;

}
