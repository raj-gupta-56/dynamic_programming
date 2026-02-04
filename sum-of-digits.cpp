#include<iostream>
using namespace std;

int main(){
  int n ,sum=0,rem;
  cout<<"enter number :";
  cin>>n;
 int x=n;
  while(n>0){
    rem=n%10;
    sum+=rem ;
    n=n/10;
  }
  cout<<"sum of digits of the number  "<<x<<" is "<<sum;
}