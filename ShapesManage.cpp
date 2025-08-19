#include<fstream>
#include"ShapesManage.h"
#include"Shapes.h"


void SShape ::addshape(){
  int shapeopt;
  Shapes *s;
  ofstream f;
  shapeopt=A.shapemenu();
  switch(shapeopt){
     case 1:
	 s=new Circle();
	 break;
	 case 2:
	 s=new Rectangle();
	 break;
	 case 3:
	 s=new Triangle();
	 break;
	 case 4:
	 return;
	 break;
   }
   s->getinput();
  f.open("E:\\C++\\C++ Mini Project\\Vadivangal.txt",ios::app); 
   f<<s->toString()<<endl;
   f.close();
   delete s;

}
void SShape ::listshapes(){
ifstream fr;
string buff;
cout<<endl<<"List of Shapes..."<<endl;
fr.open("E:\\C++\\C++ Mini Project\\Vadivangal.txt");
while((getline(fr,buff))!=NULL){
cout<<endl<<buff;
fr.close();
}
}
void SShape ::start(){
  int opt;
 
 do{
 opt= A.mainmenu();
 if(opt==3) break;
     switch(opt){
	 case 1:
	 addshape();
	 break;
	 case 2:
	 listshapes();
	 break;
	 }
  }while(opt!=3);

}



