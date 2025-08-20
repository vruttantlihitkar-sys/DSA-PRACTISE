#include<bits/stdc++.h>
using namespace std;
//selsection sorting of array
  void selectionSort(int array[] ,int arraySize){
      
      for(int a=0; a<arraySize; a++){
          for(int b=a+1;b<arraySize;b++){
              if(array[a]>array[b]){
                  int c;
                  c= array[b];
                  array[b]=array[a];
                  array[a]=c;
              }
          }
          
        
      }
      for (int w =0; w<arraySize;w++){
        cout<<array[w];
    } 
      
  }
  
int main(){
    int array []={1,5,8,2,3,6,1,2,1,3};
    int arraySize = sizeof(array)/sizeof(array[0]);
    
 selectionSort(array, arraySize);
    
   
    
    return 0;
}