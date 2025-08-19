
namespace SHAPE{

class Shapes{
 protected:
 int shapecode;
 char shapetype;
 public: 
 Shapes() {}  
 Shapes(char shapetype){
 this->shapetype=shapetype;
 }
 virtual void getinput()=0;
 virtual float area()=0;
 virtual char *toString()=0; 
};

class Circle: public Shapes{
 private:
 float r;
 public:
 Circle():Shapes('C'){
 r=0;shapecode='C';
 }
 Circle(float R):Shapes('C'){
   r=R;
 }
 void getinput();
 float area();
 char *toString();
};

class Rectangle: public Shapes{
 private:
 float h,w;
 public:
 Rectangle():Shapes('R'){
 h=0,w=0;
 shapecode='R';
 }
 Rectangle(float H,float W):Shapes('R'){
   h=H;
   w=W;
 }
 void getinput();
 float area();
 char *toString();
};

class Triangle: public Shapes{
 private:
 float h,b;
 public:
 Triangle():Shapes('T'){
 h=0,b=0;shapecode='T';
 }
 Triangle(float H,float B):Shapes('T'){
   h=H;
   b=B;
 }
 void getinput();
 float area();
 char *toString();
};

}

