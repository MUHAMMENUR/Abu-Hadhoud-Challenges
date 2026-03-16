#include <iostream>
using namespace std;

// --- Function to Read Data ---
int ReadInformation(string message){
     int number=0;
  do
  {
   
    cout<<message<<endl;
    cin>>number;
    cin.ignore();
    
  } while (number<0);
  return number;
   
    
}
//Function to Calculate Sum of Digits
int ReverseNumber(int number){
   int reserve=0,remainder=0;
   // We use 'while' because we don't know the number of digits in advance
   while (number>0)
   {
    // 1. Get the last digit using Modulo (%) 10
    remainder=number%10;
    reserve=reserve*10 +remainder;
    number=number/10;
    

    
    
   }
  return reserve;
   

}


int main(){
   int UserNumber= ReadInformation("Please Enter a positive number:");


// Printing the result by calling the function inside the cout
   cout<<"Sum of digits = "<<ReverseNumber(UserNumber);


   return 0;

}
