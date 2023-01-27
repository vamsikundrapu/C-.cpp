
#include<iostream>

using namespace std;

class student{

    // int,char,string,float,double..
    public :
     string name;
     int id;

     void into(){
        cout<<"My name is "<<name<<" , my id is "<<id<<endl;
     }

};

int main(){

     student s1;
     s1.name = "Vamsi";
     s1.id = 1;

     return 0;
}