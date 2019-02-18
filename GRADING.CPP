#include<iostream.h>
#include<stdio.h>
#include<conio.h>

class Papers {
 public:
 float score;
 void grading () {
  if (score >= 75 && score <= 100) {
   cout<<"Your grade is A. Score: \t"<<score<<endl;
   }
  else if (score >= 50 && score <= 74) {
   cout<<"Your grade is B. Score: \t"<<score<<endl;
   }
  else {
   cout<<"Your grade is C. Score: \t"<<score<<endl;
   }
  }
 void accept_score() {
  cout<<"Enter your score: ";
  cin>>score;
  }
 };

 int main () {
 while (1) {

 Papers student;
 student.accept_score();
 student.grading();
 clrscr();
 return 0;
 }
}