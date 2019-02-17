#include<stdio.h>
#include<iostream.h>
class customer {
 private:
	int billingamt[5][2];
 public:
 void accept() {
	 for (int r=0; r<5; r++) {
   cout<<"Enter your mobile number: "<<endl;
   cin>>billingamt[r][0];
   cout<<"Enter the billing amount: "<<endl;
   cin>>billingamt [r][1];
   }
  }
  void display() {
   for (int r=0; r<5; r++) {
    cout<<"Mobile number: "<<billingamt[r][0];
    cout<<"\t"<<"BIll amount: "<<billingamt[r][1]<<endl;
    }
   }
  };
 int main () {
  customer j;
  j.accept();
  j.display();
  }
