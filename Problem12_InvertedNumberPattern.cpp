#include <iostream>
#include <string>
using namespace std;


int ReadPositiveNumber(string Message){
    int Number=0;
    do
    {
        cout<<Message<<endl;
        cin>>Number;


        
    } while (Number<0);
    
return Number;

};
void PrintInvertedNumberPattern(int Number){
    for (int i =Number ; i>=0; i--)
    {
        for (int j = i; j>0; j--)
        {
            cout<<i;
        }
        cout<<endl;
    }
    
}

int main(){
    int UserNumber=ReadPositiveNumber("Please Enter Your Number:");
    PrintInvertedNumberPattern(UserNumber);


}