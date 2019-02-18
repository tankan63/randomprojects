#include<stdio.h>
#include<iostream.h>
#include<conio.h>
class calc {
private:
 int n1, n2, n3;
public:
 calc();
 void input();
 void sum();
 void display();
};
calc::calc() {
n1=n2=n3=0;
}
 void calc::sum() {
  n3=n1+n2;
  }
 void calc::input() {
  cout<<"Enter a number: ";
  cin>>n1;
  cout<<"Enter another number: ";
  cin>>n2;
 }
 void calc::display() {
 cout<<"Sum: "<<n3<<endl;
 }
int main() {
calc a;
a.input();
a.sum();
a.display();
clrscr();
return 0;
}
