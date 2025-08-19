#include<iostream>
#include<cstdio>
#include"Shapes.h"
using namespace SHAPE;
using namespace std;
void Triangle ::getinput(){
  cout<<endl<<endl<<endl;
  cout<<"Enter Shape Code : ";
  cin>>shapecode;
  cout<<endl<<endl;
  cout<<endl<<"Enter Height : ";
  cin>>h;
  cout<<endl<<"Enter Breadth : ";
  cin>>b;
}
float Triangle ::area(){
  return h*b;
}
char* Triangle ::toString(){
char *buff=new char[80];
sprintf(buff,"%d %c %f %f %f",shapecode,shapetype,h,b,area());
return buff;
}

