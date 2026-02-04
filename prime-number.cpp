#include<iostream>
using namespace std;

int main(){
  int n ;
  bool flag =0;
  cout<<"enter number :";
  cin>>n;
  for(int i=2 ;i<n;i++){
    if(n%i==0){
      flag=1;
    }
  }
  
   if(flag==1){
      cout<<"number "<<n<<"is not prime";
    }
    else{
      cout<<n<< "is prime";
    }

}