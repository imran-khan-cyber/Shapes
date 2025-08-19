#include<iostream>
#include<iomanip>
#include"Menu.h"
using namespace std;
using namespace SHAPE;
int SMenu::mainmenu(){
cout<<endl<<setw(25)<<right<<" "<<"SHAPES MANAGEMENT...";
cout<<endl<<endl<<"Menu Selection.."<<endl;
cout<<"1. Add Shape"<<endl<<"2. List Shapes"<<endl<<"3. Quit";
cout<<endl<<endl<<"Enter your Selection : ";
cin>>selection;
return selection;
}
int SMenu::shapemenu(){
cout<<endl<<endl<<"Shapes Selection.."<<endl;
cout<<"1. Circle"<<endl<<"2. Rectangle"<<endl<<"3. Triangle"<<endl<<"4. Goto Main Menu";
cout<<endl<<endl<<"Enter your Selection : ";
cin>>selection;
return selection;
}

