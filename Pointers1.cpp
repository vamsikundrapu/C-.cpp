
#include<iostream>

using namespace std;

int main(){

  int a = 10;
  int*p1 = &a;
  int**p2 = &p1;
  int***p3 = &p2;

   cout<<a<<end1;
   cout<<p1<<end1;

   ***p3 = 50;

   cout<<p2<<end1;
   cout<<p3<<end1;

  // cout<<**p3<<end1;

  return 0;

}