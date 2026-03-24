#include <iostream>
#include <string>
using namespace std;

// Function to fill the array with elements
void ReadArray(int Arr[100],int& size){
    cout<<"Enter array elements:";
    cin>>size;

    cout<<"\nEnter array elements array:\n";
    for (int i = 0; i <size; i++)
    {
        cout<<"Element["<<i+1<<"]:";
        cin>>Arr[i];
    }
    

}
// Function to count the frequency of a specific number in the array
int CountNumberFrequency(int Arr[100],int size,int NumberToCheck){
    int Counter=0;

    for (int i = 0; i < size; i++)
    {
        if (Arr[i]==NumberToCheck)
        {
            Counter++;
        }
        
    }
    return Counter;
}
int main(){
    int Arr[100];
    int arraysize=0;
    // 1. Read the array from the user
    ReadArray( Arr,arraysize);
// 2. Ask for the number to search for
    int NumbrToCheck=0;

    // 3. Print the final result using the returned value
    cout<<"\nEnter The Number you want to check:";
    cin>>NumbrToCheck;
    cout<<"\nNumber "<<NumbrToCheck<<" is reapeted ";
    cout<<CountNumberFrequency(Arr,arraysize,NumbrToCheck)<<" time(s)";
    
}