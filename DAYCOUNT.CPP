#include<iostream.h>
class DayCount {
 int month;
 int year;
 int days;
 public:
 DayCount() {
  year=0;
  month=0;
  }
 int leap() {
  if (year%4==0 || year%400!=0)
   return 1;
  else
   return 0;
  }
 void setDate(int mth, int yr) {
  month=mth;
  year=yr;
  }
 void setDate(int mth) {
  month=mth;
 }
 char *monthName() {
  switch (month) {
   case 1: return "Jan";
   break;
   case 2: return "Feb";
   break;
   case 3: return "Mar";
   break;
   case 4: return "Apr";
   break;
   case 5: return "May";
   break;
   case 6: return "Jun";
   break;
   case 7: return "Jul";
   break;
   case 8: return "Aug";
   break;
   case 9: return "Sep";
   break;
   case 10: return "Oct";
   break;
   case 11: return "Nov";
   break;
   case 12: return "Dec";
   break;
   default: return "000";
  }
 }
 void setDays() {
  switch (month) {
   case 1:
   case 3:
   case 5:
   case 7:
   case 8:
   case 10:
   case 12:
    days=31;
    break;
   case 4:
   case 6:
   case 9:
   case 11:
    days=30;
    break;
   case 2:
    if (leap())
     days=29;
    else
     days=28;
    break;
    default:
     days=0;
    }
   }
  void display(){
   cout<<"Days in "<<monthName()<<" are: "<<days<<endl;
   }
  };
int main() {
 DayCount d;
 d.setDate(3, 2001);
 d.display();
 d.setDate(2, 2016);
 d.display();
 d.setDate(5, 2037);
 d.display();
 d.setDate(2);
 d.display();
 return 0;
}


