#include<iostream>
using namespace std;

int main(){                                 //454   
  int n ,rem,rev=0;
  cout<<"enter number :";
  cin>>n;
 int x=n;
  while(n>0){
    rem=n%10;
    rev = rev*10 +rem;
    n=n/10;
  }
  cout<<"sum of digits of the number  "<<x<<" is "<<rev;
}