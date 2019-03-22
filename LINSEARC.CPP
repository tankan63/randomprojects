#include<stdio.h>
#include<iostream.h>
void main() {
 int arr[20];
 int n;
 int i;
 while(1) {
  cout<<"Enter elements number: "<<endl;
  cin>>n;
  if ((n>0) && (n<=20))
   break;
  else
   cout<<"Only brtween 1 and 20 please."<<endl;
   }
  cout<<"Enter array Elements: "<<endl;
  for (i=0; i<n; i++) {
   cout<<"<"<<i+1<<">"<<endl;
   cin>>arr[i];
  }
  char ch;
  int ctr;
  do {
   int item;
   cout<<"\nEnter item to be searched: ";
   cin>>item;
   ctr=0;
   for (i=0; i<n; i++) {
    ctr++;
    if (arr[i]==item) {
     cout<<"\nItem found at: "<<i+1<<endl;
     break;
    }
   }
  if (i==n)
   cout<<endl<<"Not found.\n";
   cout<<"\n Number of comparisons: "<<ctr;
   cout<<"\nContinue Search? (Y/N) : "<<endl;
   cin>>ch;
   } while((ch=='y') || (ch=='Y'));
  }



