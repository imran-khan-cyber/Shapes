#include<iostream>
#include<cstdio>
#include"Shapes.h"
using namespace SHAPE;
using namespace std;
void Circle ::getinput(){
  cout<<endl<<endl<<endl;
  cout<<"Enter Shape Code : ";
  cin>>shapecode;
  cout<<endl<<endl;
  cout<<endl<<"Enter Radius : ";
  cin>>r;
}
float Circle ::area(){
  return 3.14*r*r;
}
char* Circle ::toString(){
char *buff=new char[80];
sprintf(buff,"%d %c %f %f",shapecode,shapetype,r,area());
return buff;
}

