#include<iostream>
#include<cmath>
using namespace std;

int main(){                                   
  int n ,sum=0,digit,fact;
  cout<<"enter number :";
  cin>>n;
 int x=n;
  while(n>0){
    digit=n%10;
    fact=1;
    if(digit>0){
      for(int i=1;i<=digit;i++){
        fact=fact*i;
      }
    }
    sum +=fact;
    n=n/10;
  }
 
  if(sum==x){
    cout<<" the number  "<<x<<" is stronge number";
  }
  else{
    cout<<"the number "<<x<<" is not a stronge number";
  }
}