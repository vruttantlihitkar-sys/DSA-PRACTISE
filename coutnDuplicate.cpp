#include<bits/stdc++.h>
using namespace std;

void duplicate(int array[], int length){
    
    for (int a= 0; a<length; a++){
        int count=0;
        for(int b =0; b<length; b++){
          if (array[a]==array[b]){
              count++;
              
          } 
            
        }
        cout<<"count is "<<count<<" for "<<array[a]<<endl;
    }
}


int main(){
    
    
    int array []={1,3,4,5,7,8,4,3,1};
    int length= sizeof(array)/sizeof(array[0]);
    cout<<length<<endl;
    duplicate(array, length);
    return 0;
    
}