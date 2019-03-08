#include<fstream.h>
class student {
private:
 char name[21];
 int regno;
public:
 void setno() {
  cout<<"Enter the Registration Number: "<<endl;
  cin>>regno;
  }
 void setname() {
  cout<<"Enter the name: "<<endl;
  cin>>name;
  }
 int getno() {
  return regno;
 }
 char *getname() {
  return name;
 }
};
void main() {
 ofstream sfil("student.dat");
 char ch;
 student stu;
 stu.setno();
 stu.setname();
 sfil<<stu.getno()<<" "<<stu.getname();
 sfil.close();
 cout<<"Do you want to view the records? (Y/N)"<<endl;
 cin>>ch;
 if (ch=='y' || ch=='Y') {
  ifstream sfil("student.dat");
  char ireg;
  char stname[21];
  sfil>>ireg>>stname;
  cout<<"\n Registration number is: "<<ireg;
  cout<<"\n Name is : "<<stname;
  }
 }




