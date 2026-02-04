#include<iostream>
#include<cmath>
using namespace std;

int main(){                                   
  int n ,sum=0,digit, count=0;
  cout<<"enter number :";
  cin>>n;
 int x=n;
 int z=x;
  while(n>0){
    n=n/10;
    count++;
  }
  while(x>0){
    digit=x%10;
    sum+= pow(digit,count);
    x=x/10;
  }
  if(sum==z){
    cout<<" the number  "<<z<<" is armstronge number";
  }
  else{
    cout<<"the number "<<z<<" is not a armstronge number";
  }
}