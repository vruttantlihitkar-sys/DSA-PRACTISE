#include<bits/stdc++.h>
using namespace std;

// prime

void isPrime(int array[], int arraySize){
   
    for (int a=0; a<=arraySize-1;a++){
         bool prime=true;
    if(array[a]>2){
        for (int k = 2; k< sqrt(array[a]);k++){
          if(array[a]%k==0){
           prime=false;
          }  
        }
        if(prime){
            cout<<array[a]<<" ";
        }
    }
    
    }
}

int main(){
    
    int array []={4,5,6,3,4,3,5,17 ,91,404,309,555,666,77};
    int arraySize = sizeof(array)/sizeof(array[0]);
    isPrime(array, arraySize);
    cout<<sqrt(8);
    return 0;
}