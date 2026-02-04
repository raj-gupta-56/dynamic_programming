#include<iostream>
using namespace std;

int main(){
  int n , fact=1 ,rem , count=0;
  cout<<"enter number :";
  cin>>n;
  for(int i=2;i<=n;i++){
    fact=fact*i;
  }
  cout<<fact;

  while (fact>0)
  {
   rem = fact%10;
   fact=fact/10;
   if(rem==0){
    count++;
   }
   else{
    break;
   }
  }
  cout<<"trailing zero is "<<count;
  
}