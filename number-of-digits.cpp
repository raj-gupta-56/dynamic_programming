#include<iostream>
using namespace std;

int main(){
  int n ,count=0;
  cout<<"enter number :";
  cin>>n;
 int x=n;
  while(n>0){
    n=n/10;
    count++ ;
  }
  cout<<"number of digits in "<<x<<" is "<<count;
}