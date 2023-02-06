#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 10;
    int b = 0;

    try{
       try{
          if(b == 0)throw 0;
        // unsure logic or code here
           cout<<a/b<<endl;

        }
        catch(...){
            cout<<" throw from the try block.!"<<endl;
            throw;
        // alternative codeor logic.!
        }
    }catch(...){
        cout<<"Catched"<<endl;
    }
        cout<<"program ended normally"<<endl;

        return 0;
}