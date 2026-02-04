#include<iostream>
using namespace std;

int main(){
  int n ,rem;
  cout<<"enter number :";
  cin>>n;
 int sum,x;
 sum=x=n;
  while(sum>9){
    int z=0;
    while(sum>0){
    rem=sum%10;
    z+=rem ;
    sum=sum/10;
  }
  sum = z;
  }
  cout<<"sum of digits of the number  "<<x<<" is "<<sum;
}