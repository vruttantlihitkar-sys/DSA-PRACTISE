    #include<bits/stdc++.h>
    using namespace std;
    
    int main (){
        vector<int> array;
        
        array.push_back(1);
        array.push_back(2);
        
        cout<< array.size();
        int x;
        x= array.size();
        
        for(int i=0;i<x;i++){
            cout<<" "<<array[i]<<" ";
        }
        
        array.pop_back();
        
         for(int i=0;i<x;i++){
            cout<<" "<<array[i]<<" ";
        }
        return 0;
        
    }