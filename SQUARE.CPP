#include<iostream.h>
#include<stdio.h>

class loops {
 int num;
 char reply;
 public:
  void square () {
   reply='y';
   while (reply!='n') {
    cout<<"Enter a number Between 1 and 100"<<endl;
    cin>>num;
    if (num<1 || num>100) {
     cout<<"Number is not in range of 1 to 100"<<endl;
     continue;
     }
    cout<<"The square is: "<<num*num<<endl;
    cout<<"Enter another number (y/n)?"<<endl;
    cin>>reply;
    }
   }
  };

int main () {
 loops l1;
 l1.square();
 return 0;
}
