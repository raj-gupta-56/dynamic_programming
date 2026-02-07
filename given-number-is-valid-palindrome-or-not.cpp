#include<iostream>
using namespace std;

int main(){
  int n ,rem,c=0;
  cout<<"enter number :";          //12231  ----->12321
  cin>>n;
 int x=n,a , z=n;
  while(n>0){
    rem=n%10;
   int count=0;
    x=z;
    while (x>0)
    {
     a=x%10;
     if(a==rem){
      count++;
     }
    x/=10;
    }

    if(count%2!=0){
      c++;
    }
    n/=10;
}
if(c<=1){
      cout<<"the given number is valid palindrome number";
    }else{
      cout<<"the given number is not a valid palindrome number";

    }
}