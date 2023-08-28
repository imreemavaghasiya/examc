#include<iostream>
#include<string>
using namespace std;

class abc{
   public:
   int a,b,c;
   void print()
       {
   	   cout<<"member funcation"<<endl;
       }
	   void print (int a);
	   {
	   	cout<<"A="<<a<<endl;
	   }
	   void print(int a,int b);
	   	{
	   	 cout<<"A+B="<<a+b<<endl;	
		}
		void print(int a,int b,int c);
		{
			cout<<"A+B+C="<<a+b+c<<endl;
		}
		
};

int main()
{
abc a;
p.print(50);
p.print(50,60);
p.print(50,60,70);
}







