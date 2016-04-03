#include <iostream>
#include <cstdlib>
using namespace std;
class student{
public:
    string name;
    string Registration_Number;
    string degree_program;
    string cgpa;
public:
    void getname();
    string putname();
    string update();
    };
void student::getname(){

    cout << "Enter Student Name : ";
    cin >> name;
    cout << "Enter Registration Number :";
    cin >> Registration_Number;
    cout << "Enter Degree Program : ";
    cin >>degree_program;
    cout << "Enter CGPA : ";
    cin >> cgpa;
}
string student::putname(){
return  " \nStudent Name : " + name + "\nGr No : " + Registration_Number +
"\nDegree Program : "+ degree_program + "\nCGPA : " +  cgpa +
"\n********************";
}
string student::update(){
    cout << "Enter Degree Program : ";
    cin >>degree_program;
    cout << "Enter CGPA : ";
    cin >> cgpa;
    cout << "\nProfile Has Been UpDated "<<endl;
    return  " \nStudent Name : " + name + "\nGr No : " + Registration_Number +
    "\nDegree Program : "+ degree_program + "\nCGPA : " +  cgpa +
    "\n********************";
}
int main(){
     const int objectSize = 3;
     student object[objectSize];
while(1){
  int selectOption,loop = 0;
  bool found = false;
  char another;
  string getGrNo;
  system("cls");
  cout<<"\n\t\t     WELLCOME TO ADMINISTRATOR PANNEL\n\n";
       cout<<"\t\t\t1. Add Student Record\n\t\t\t"
                   "2. Update Student Record\n\t\t\t"
                   "3. Delete Student Record \n\t\t\t"
                   "4. Display Student Record\n\t\t\t"
                   "5. Exit ";
       cout << "\n\n\t\t\tSelect Option : ";
  cin>>selectOption;
switch(selectOption){
case  1:
        system("cls");
        cout << "\n\t\t\t Add Student Record "<<endl;
        do{
        another = 'y';
        object[loop].getname();
        cout<<"press y to continue : ";
        cin>>another;
         loop++;
        if(loop == objectSize && another == 'y' || another == 'Y'){
        cout<<"\nSorry Memory is full"<<endl;
        break;
        system("pause");
        }
        }
        while(another == 'Y' || another == 'y' && loop < objectSize );
        system("pause");
break;
case 2:
       system("cls");
       cout << "\n\t\t\t Update Student Record "<<endl;
       do
       {
       cout << "Enter grno : ";cin>>getGrNo;
       found = false;
       while(!found && loop<objectSize ){
       if(getGrNo == object[loop].Registration_Number){
       found = true;
       cout << object[loop].putname()<<endl;
       cout << "Now UpDate Profile "<<endl;
       cout << object[loop].update()<<endl;
       cout<< "\npress y to more search : "<<endl;cin>>another;
       }
       loop++;
       }
       if(another == 'y' || another == 'Y'){
       loop = 0;
       }
       if(found == false){
        cout << "Not Found Please Try Again !!"<<endl;
        cout<< "press y to more search : ";cin>>another;
       }
       }
       while(another == 'y' || another == 'Y');
       system("pause");
break;
case 3:
     system("cls");
     cout << "\n\t\t\tDelete Student Record "<<endl;
     do
       {
       cout << "Enter Registration Number : ";cin>>getGrNo;
       found = false;
       while(!found && loop<objectSize ){
       if(getGrNo == object[loop].Registration_Number){
       found = true;
       cout << object[loop].putname()<<endl;
       cout << "Now Delete Data "<<endl;
       cout << "Press Y to Delete Data : \a\a";cin>>another;
       if(another == 'y' || another == 'Y'){
        object[loop].Registration_Number = "Not Found";
        cout << "Profile Has Been Deleted \n"<<endl;
       }
       else{
        cout<<"Data Is Not Delete "<<endl;
       }
       cout<< "press y to more search : "<<endl;cin>>another;
       }
       loop++;
       }
       if(another == 'y' || another == 'Y'){
       loop = 0;
       }
       if(found == false){
        cout << "Not Found Please Try Again !!"<<endl;
        cout<< "press y to more search : ";cin>>another;
       }
       }
       while(another == 'y' || another == 'Y');
       system("pause");
break;
case 4:
       system("cls");
       cout << "\n\t\t\t Display Student Record "<<endl;
    do
       {
        cout << "Enter Registration Number : ";cin>>getGrNo;
       found = false;
       while(!found && loop<objectSize ){
       if(getGrNo == object[loop].Registration_Number){
       found = true;
       cout << object[loop].putname()<<endl;
       cout<< "\npress y to more search : "<<endl;cin>>another;
       }
       loop++;
       }
       if(another == 'y' || another == 'Y'){
       loop = 0;
       }
       if(found == false){
        cout << "Not Found Please Try Again !!"<<endl;
        cout<< "press y to more search : ";cin>>another;
       }
       }
       while(another == 'y' || another == 'Y');
       system("pause");
break;
case 5:
      system("cls");
      cout << " Now Program is Closed"<<endl;
      cout<<"\a\a";
      return 0;
default:
      cout << "\n\t\t  InValid Select Option Please Try Again ThanK You!!\a\a"<<endl;
      system("Pause");
}
}
return 0;
}
