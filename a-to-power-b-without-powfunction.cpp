#include<iostream>
#include<cmath>
using namespace std;

int main(){                                   
  int a,b ;
  cout<<"enter value of a :";
  cin>>a;
  cout<<"enter value of b :";
  cin>>b;
// let z=a^b;
int z=1;

  for(int i=0;i<b;i++){
    z=a*z;
  }
  cout<<z;

}