#include<bits/stdc++.h>
using namespace std;


//pattern hai array ka

void pattern(int arrayOiginal [], int sizeofarray){
    for (int row=0;row<=sizeofarray;row++){
        for (int col= 0; col<=sizeofarray-row;col++){
            cout<<arrayOiginal[col];
        }
        cout<<endl;
    }
}


int main()
{
    int arrayOiginal []= {1, 2 ,5 ,6 ,9 ,4, 9, 5};
    int sizeofarray= sizeof (arrayOiginal)/sizeof(arrayOiginal[0]);
    cout<<sizeofarray<<endl;
    pattern(arrayOiginal,sizeofarray);
    return 0;
}
