#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"enter size of array :";
  cin>>n;

  int arr[n];
  int size=sizeof(arr)/sizeof(arr[0]);
 cout<<"enter element of array:";
for(int i=0;i<size;i++){
 cin>>arr[i];}
  bool flag =0;
  // bubble sort
  for(int j=0;j<size-1;j++){
  for(int i=0;i<size-1-j;i++){
    if(arr[i]>arr[i+1]){
      int temp = arr[i];
      arr[i]=arr[i+1];
      arr[i+1]=temp;
      flag=1;
    }
  }
    if(flag==0){
      break;
    }
}
for(int i=0;i<size;i++){
 cout<<arr[i];}
  // main lojic of product of 3 numbers

  int p1 = arr[size-1]*arr[size-2]*arr[size-3];
  int p2 = arr[0]*arr[1]*arr[size-1];
  p1>p2?cout<<p1:cout<<p2;

}