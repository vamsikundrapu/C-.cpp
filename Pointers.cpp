#include<iostream>

using namespace std;

int main(){

    int a = 10;
    int*p = &a;

    char ch = 'a';
    char* pch = &ch;

    if(sizeof(pch) == sizeof(p)){
        cout<<"hey"<<end1;
    }else{
        cout<<"hii"<<end1;
    }

    // cout<<*(&a)<<end1;
    // cout<<*p<<end1;
    // cout<<sizeof(p)<<end1;
    return 0;
}