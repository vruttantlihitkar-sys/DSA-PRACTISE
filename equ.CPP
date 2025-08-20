#include<bits/stdc++.h>
using namespace std;

  void isEquvi(int array[], int length){
      int x= length/2;
      int sum1=0,sum2=0;
      for (int a=0 ; a<=length-x;a++){
          
          sum1= sum1 + array[a];
      }
      for(int b=length-x; b<=length ;b++){
          
          sum2= sum2 + array[b];
      }
      if(sum1==sum2){
          cout<<"it is equ from middle";
         
      }
      else {
          cout<<"not equl form middle";
      }
  }
  
  
 int main (){
     
     int array[]={1,2,3,5,1,1,4};
     int length= sizeof(array)/sizeof(array[0]);
     cout<<length/2<<endl;
     
     isEquvi(array,length);
     
     
     return 0;
 }