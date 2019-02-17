#include<stdio.h>
#include<iostream.h>

class Loops {
 int i;
 int num;
 int sum;
 public:
  void accept() {
   for (sum=num=i=0; i<25; i++) {
    cout<<"Enter a Number: "<<endl;
    cin>>num;
     if (num<=0)
      continue;
     sum=sum+num;
     }
    }
   void display() {
    cout<<"The sum is: "<<sum<<endl;
    }
   };
 int main () {
  Loops l1;
  l1.accept();
  l1.display();
  return 0;
  }

