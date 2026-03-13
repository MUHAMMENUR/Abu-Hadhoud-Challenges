#include <iostream>
#include <cstdlib> 
#include <ctime>   
#include <string>    
#include <cmath>
#include <thread>
#include <chrono>
#include <clocale>
#include <iomanip>
// deneme satırı

using namespace std;  

struct Volunteer{
    string Name;
    string Number;
    string Skill;
    bool Isavalible;

};

void ShoWelcomeMessage(){
    cout << "*****************************************" << endl;
cout << "* AFET GONULLU YONETIM SISTEMI    *" << endl;
cout << "*****************************************" << endl;

    
}
void ReadInformation(Volunteer &v){


cout<<"\nPlease Enter The information of new volunteer..."<<endl;
    cout<<"Please Enter Your name: "<<endl;
    getline(cin,v.Name);
    cout<<"Please Enter your phone number: "<<endl;
    cin>>v.Number;
    cin.ignore(); // buda belleği temizleyebilmesi için onsuz bu satır okunmayacak
    cout<<"Please Enter your skills like Doctor,Engineer,lojistic.... "<<endl;
    getline(cin,v.Skill);
   
     v.Isavalible=true;  //burda ilk kaydığındı yaptırtığında otomatiktan müsait oluyor

}
bool Askuser( ){
    int choice;
   
        cout<<"Would you want to add another person? press 1 to add person/press 0 to see information "<<endl;
        cin>>choice;
        

   
    return (choice==1);
} 

int RegiseterAllVolunteer(Volunteer list[]){
    int counter=0;
    bool Keepgoing=true;
    while (Keepgoing&&counter<100)
    {
        ReadInformation(list[counter]);

        counter++;
        if (counter<100)
        {
            Keepgoing=Askuser();
        }
        

    }
    return counter; //buda kaç kişi kayıt yaptığını gösteriyor
}
int counter=0;
void PrintInormation(Volunteer v){
    cout<<"Here Are your Information...."<<endl;
    cout<<"********************"<<endl;
    cout<<"Name: "<<v.Name<<endl;
    cout<<"Phone Number: "<<v.Number<<endl;
    cout<<"Skill: "<<v.Skill<<endl;
    cout<<"Avalibality: "<<v.Isavalible<<endl;
    cout<<"********************";
}
void DisplayFullList(Volunteer list[],int count){
    cout << "\n=========================================" << endl;
    cout<< "          ŞU ANDA KAYITLI GÖNÜLLÜLER         "<<endl;
    cout << "\n=========================================" << endl;
if (count==0)
{
cout<<"Henüz kayıtlı gönüllü yok."<<endl;

}else{
    for (int i = 0; i < count; i++)
    {
        cout<<i+1<<". ";
        PrintInormation(list[i]);
    }
    
}
cout << "\n=========================================" << endl;
}




int main(){
 

    















    cout << "--- TABLO 1: FORMATSIZ (DUZ) ---" << endl;
    cout << "Isim: Ali Sehir: Darica" << endl;
    cout << "Isim: Abdulrahman Sehir: Istanbul" << endl;
    cout << "---------------------------------" << endl;

    // السطر الثاني: استخدام setw(15) مع left (نظام الفندق والكنب)
    cout << "\n--- TABLO 2: IOMANIP ILE (DUZENLI) ---" << endl;
    
    // طباعة العناوين أولاً بنفس المسافات
    cout << left << setw(15) << "ISIM" << setw(15) << "SEHIR" << endl;
    cout << string(30, '-') << endl;

    // طباعة البيانات: لاحظ كيف "Istanbul" رح تبدأ من نفس النقطة رغم اختلاف طول الأسماء
    cout << left << setw(15) << "Ali" << "Darica" << endl;
    cout << left << setw(15) << "Abdulrahman" << "Istanbul" << endl;
    cout << string(30, '-') << endl;




}