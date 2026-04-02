#include <iostream>
#include <string>
#include <cstdlib>// Required for rand() and srand() functions
#include <ctime>   // Required for time() function to get system time
using namespace std;


//Function to Read Positive Number
int ReadPositiveNumber(string Message){
    int Number=0;
    do
    {
        cout<<Message;
        cin>>Number;


        
    } while (Number<0);// Repeat if the number is negative
    
return Number;

};
void AddNumber(int Number,int Arr[],int &Length){
       
        Arr[Length]=Number;
        Length++;
   
    

}












void PrintArray(int Arr[100],int Size){
    for (int i = 0; i < Size; i++)
    {
       
        cout<<Arr[i]<<" ";
        
    }
   
    
}



int main(){
    // Seeds the random number generator with current system time
    srand((unsigned)time(NULL));
    // Input: How many keys to generate

    int Arr[100];
    
    int Size=ReadPositiveNumber("Please Enter Number:");
    int Length=0;
    int UserChoice;
    int NewNumber;
    
do
{

    cout<<"Do you want to add number [0]NO,[1] YES? ";
    cin>>UserChoice;
    if (UserChoice==1)
    {
        cout<<"Enter Number";
        cin>>NewNumber;
        AddNumber(NewNumber,Arr,Length);
    }
    
    
} while (UserChoice==1);
cout<<"\nArray Length: "<<Length<<endl;
cout<<"Array Elements:";
PrintArray(Arr,Length);


   

   


   
    
    
    return 0;
}