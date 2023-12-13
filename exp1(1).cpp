#include <iostream>
using namespace std;
class complex
{ 
   int x,y;
   public:
   complex()
   { 
       x=0;
       y=0;
   }
   friend void operator>>(complex &u,complex &v)
   {
      cout<<"Enter the real value for the first no.(x1)=>"<<endl;
      cin>>u.x;
      cout<<"Enter the imaginary value for. (y1)=>"<<endl;
      cin>>v.y;
      cout<<"Enter the real value for. (x2)=>"<<endl;
      cin>>u.x;
      cout<<"Enter the imaginary value for. (y2)=>"<<endl;
      cin>>v.y;
   }
   friend void operator<<(complex &u,complex &v)
   {
      cout<<"The first complex no.="<<u.x<<"+"<<u.y<<"i"<<endl;
      cout<<"The second complex no.="<<v.x<<"+"<<v.y<<"i"<<endl;
   
   }
   friend void operator+(complex &u,complex &v)
   { 
      complex add;
      add.x=u.x+v.x;
      add.y=u.y+v.y;
      if(add.y>0)
      cout<<"Addition of the given complex number.="<<add.x<<"+"<<add.y<<"i"<<endl;
      else
      cout<<"addition of the given complex number .="<<add.x<<(-1)*add.y"i"<<endl;
   }
   friend void operator-(complex &u,complex &v)
   {
      complex sub;
      sub.x=u.x-v.x;
      sub.y=u.y-v.y;
      if(sub.y>0)
      cout<<"Substraction of the given complex number .="<<sub.x<<"+"<<sub.y<<"i"<<endl;
      else
      cout<<"Substraction of the given complex number .="<<sub.x<<(-1)*sub.y"i"<<endl;
   }
   friend void operator*(complex &u,complex &v)
   { 
      complex mul;
      mul.x=(u.x*v.x)-(u.y*v.y);
      mul.y=(u.x*v.y)-(u.y*v.y);
      if(mul.y>0)
      cout<<"Multiplication of the given complex number.="<<mul.x<<"+"<<mul.y<<"i"<<endl:
      else
      cout<<"multiplication of the given complex number .="<<mul.x<<(-1)*mul.y"i"<<endl;
    }
     
};
int main()
{
  char ch;
  char des;
  complex s1,s2;
  operator >>(s1,s2);
  operator <<(s1,s2);
  do
  {
     cout<<"Choose the operation to be performed="<<endl;
     cout<<"(+) for addition"<<endl;
     cout<<"(-) for substraction"<<endl;
     cout<<"(*) for Multiplication"<<endl;
     cin>>ch;
     switch(ch)
     {
        case '+':
        s1+s2;
        case '-':
        s1-s2;
        case '*':
        s1*s2;
        break;
        default:
        cout<<"Invalid Operation"<<endl;
      }
      cout<<"Do you wish to perform operation again? (Y/N);
      cin>>des;
   }while(des=='y'||des=='Y');
}
        
        
        
        
        
        
        
        
  
   
   
   
   
   
   
   
   
   
   
   
   
       
        
        
