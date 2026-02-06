#include<iostream>
using namespace std;

int main(){
  int n ,count=0;
  cout<<"enter number :";          //54397  ----->97543
  cin>>n;
 int x=n;
  while(n>0){
    n=n/10;
    count++ ;
  }
  int arr[count];
  int rem, i=0;
  while (x>0)
  {
    rem=x%10;
    arr[i++]=rem;
    x/=10;
  }

  bool flag = 0;
  
for(int j=0;j<count-1;j++){
  for(int i=0;i<count-1-j;i++){
    if(arr[i]<arr[i+1]){
      int temp = arr[i];
      arr[i]=arr[i+1];
      arr[i+1]=temp;
      flag=1;
    }
  }
    if(flag==0){
      break;
    }
}

  for(int i=0;i<count;i++){
    cout<<arr[i];
  }
}




///  using math(high level code)








// #include<iostream>
// using namespace std;

// int main(){                                 //45179 --->97541 
//   int n ,rem , result=0;
//   cout<<"enter number :";
//   cin>>n;

//  while(n>0){
//   int max=-1;
//   int temp =n;
//   while(temp>0){
//     rem= temp%10;
//     if(rem>max){
//       max=rem;
//     }
//     temp = temp/10;
//   }
//   result = (result*10) +max;

//   temp = n;
//   int removed=0, newnum =0 ,digit,place=1;
//   while (temp>0)
//   {
//    digit = temp%10;
//    if(digit==max&&removed==0){
//     removed = 1;
//    }
//    else{
//     newnum = newnum +(digit*place);
//     place=place*10;
//    }
//    temp =temp /10;
//   }
//   n=newnum;
  

//  }
//  cout<<result;

// }