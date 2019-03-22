#include<stdio.h>
#include<iostream.h>
void main() {
 int arr[20];
 int n;
 int i;
 while(1) {
  cout<<"\nEnter array elements: "<<endl;
  cin>>n;
  if ((n>0) && (n<=20))
   break;
  else
   cout<<"Enter between 1 and 20 elements only. "<<endl;
   }
  cout<<"\nEnter the array items: "<<endl;
  for (i=0; i<n; i++) {
   cout<<"<"<<i+1<<">";
   cin>>arr[i];
   }
  for (i=1; i<n; i++) {
   for (int j=0; j<n; j++){
    if (arr[j]>arr[j+1]) {
     int temp;
     temp=arr[j];
     arr[j]=arr[j+1];
     arr[j+1]=temp;
     }
    }
   }
  char ch;
  do {
   int item;
   cout<<"\n Enter the item to be searched. ";
   cin>>item;
   int lb=0;
   int ub=n-1;
   int mid= (lb+ub)/2;
   int ctr=1;
   while( (item!=arr[mid]) && (lb<=ub)) {
    if (item>arr[mid])
     lb=mid+1;
    else
     ub=mid-1;
    mid=(lb+ub)/2;
    ctr++;
   }
  if (item==arr[mid])
   cout<<"\nItem found at: "<<mid+1<<endl;
  else
   cout<<"\n Item Not found at all. "<<endl;
  cout<<"\nNumber of comparisons: "<<ctr;
  cout<<"\nContinue Search? (Y/N) "<<endl;
  cin>>ch;
  } while((ch=='y') || (ch=='Y'));
 }






