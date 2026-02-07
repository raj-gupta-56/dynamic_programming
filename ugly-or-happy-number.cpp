#include<iostream>
using namespace std;

int squaresum(int n){
  int rem,sum=0;
  while(n>0){
    rem = n%10;
    sum = sum+(rem*rem);
    n/=10;
  }
  return sum;
}

int main(){
  int n,ugly;
  cout<<"enter number :";          //12231  ----->12321
  cin>>n;
 int x=n;
  while(n>1){
    if(n%2==0){
      n=n/2;
    }
    else if(n%3==0){
      n=n/3;
    }
    else if(n%5==0){
      n=n/5;
    }else{
      break;
    }
  }
  ugly=n;
  n=x;


  while(n!=1&&n!=4){
    n=squaresum(n);
  }

  
if(n==1){
  cout<<x<<" is happy number \n";
}
  if(ugly==1){
    cout<<x<<" is ugly\n";
  }

    
}