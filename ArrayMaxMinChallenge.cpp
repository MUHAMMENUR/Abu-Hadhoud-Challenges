/*
 * Project: Array Statistics & Data Copying
 * Developer: MUHAMMED NUR SANDA
 * Date: 2026-02-11
 * Description: Generates random numbers, calculates Max/Min/Sum/Avg, 
 * and demonstrates array duplication.
 */

#include <iostream>
#include <iostream> 
#include <cstdlib> 
#include <ctime>   
#include <string>    
using namespace std;  
int getnumber(string message){
    int number=0;
    do
    {
        cout<<message;
        cin>>number;
    } while (number<0);
    return number;
}
int randnumber(int From,int To){
    int randomnumber=rand()%(To-From+1)+From;

    return randomnumber;

}void
 appendtoarry(int arr[100],int length){
    int counter=0;
    for (int i = 0; i < length; i++)
    {
        arr[i]=randnumber(1,100);
    }
    
}
void printarry(int arr[100],int length){for (int i = 0; i < length; i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
}
int findmaxnumber(int arr[100],int length){
    int max = arr[0];
    for (int i = 0; i < length; i++)
    {
        if (arr[i]>max)
        {
          max=arr[i];
        }
        
    }
    return max;
    
}
int findminnumber(int arr[100],int length){
    int min=arr[0];
    for (int i = 0; i < length; i++)
    {
        if (arr[i]<min)
        {
            min=arr[i];
        }
        
    }
    return min;
}
int sumofrandnumbers(int arr[100],int length){
    int counter=0;
    for (int i = 0; i < length; i++)
    {
        counter+=arr[i];
    }
    return counter;
}
void CopyArray(int arrSource[100], int arrDestination[100], int length) {
    for (int i = 0; i < length; i++) {
        arrDestination[i] = arrSource[i];
    }
}
int main(){
    int arr[100];
    int arr2[100];
    srand((unsigned)time(NULL));
 int length = getnumber("Please enter how many elements: ");
appendtoarry(arr,length);
cout<<"Array elements: ";




printarry(arr,length);
findmaxnumber(arr,length);




int max=findmaxnumber(arr,length);
cout<<"Max number is: "<<max<<endl;



int min=findminnumber(arr,length);
cout<<"Min number is "<<min<<endl;

int sumofnumbers=sumofrandnumbers(arr,length);
cout<<"The sum of these number is "<<sumofnumbers<<endl;

float average = (float)sumofnumbers / length;
cout << "The Average is: " << average << endl;
CopyArray(arr, arr2, length);
cout << "Copied Array (arr2): ";
    printarry(arr2, length);


}