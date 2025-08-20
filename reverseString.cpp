// reverseArray
#include <iostream>
using namespace std;
void reverseArray(int array[],int size){
    for (int a= size-1; a>=0;a--){
        cout<<array[a]<<" ";
    }
    
}
int main()


{
    
   int array[]={1,3,4,5,6,7,8};
   
   int size = sizeof(array)/sizeof(array[0]);
   reverseArray( array, size);
   return 0;
}