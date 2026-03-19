#include <iostream>
#include <string>
using namespace std;

//Function to Read Positive Number
int ReadPositiveNumber(string Message){
    int Number=0;
    do
    {
        cout<<Message<<endl;
        cin>>Number;


        
    } while (Number<0);// Repeat if the number is negative
    
return Number;

};
void PrintNumberPattern(int Number){
    for (int i = 1; i <=Number; i++)
    {
        for (int j = 1; j <=i ; j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
    
}
int main(){
    int UserNumber=ReadPositiveNumber("Please Enter a positive number:");
    PrintNumberPattern(UserNumber);
}