#include <iostream>
#include <stdio.h>


//#include <typeinfo>

using namespace std;


//void sum(int x, float y);  //function declaration or function prototype
float sum(int , float ); 
int range_check(); 
int check_char();



int main()

{

 int x;                //declararion of variable x
 float y = 2.5;        //definition of variable y 
 //char ch = 'a';        
 float z = 10.5, total;
 

 x = 2;                //variable x is assigned 2

 //x = 2.5;              //C/C++ is statically typed language

 
 cout << "x is " << x << endl;

// printf("x is %d\n", x); //use of format specifier

 
 cout << "y is " << y << endl;
 //printf("y is %.3f\n", y);


  
 //sum(x,y);

  total = sum(x,y);

  cout << "The sum is " << total << endl;
  cout << "z is " << z << endl;

 //range_check();

 check_char();

 
 return 0;

}

/*void sum(int x, float y)   //function definition
{
  
 float z;

 z = x + y;

 cout << "The sum of " << x << " and " << y << " is " << z << endl;

 
}*/

float sum(int x, float y)   //function definition
{
  
 float z;

 z = x + y;

 return z;

 
}

int range_check()
{
 int x;

// cout << "The no. of bytes needed for int are " << sizeof(x) << endl;

 x = 2147483647;
 
// x = 2147483648;
 //x = -2147483649;

 //cout << "The value of x is " << x << endl;

 //return 0;

 long y;

 y =  2147483648;

 //cout << "The value of y is " << y << endl;
 
 //cout << "The no. of bytes needed for long are " << sizeof(y) << endl;

// y = 9223372036854775807;
 // y = 9223372036854775808;

 //cout << "The value of y is " << y << endl;

 //return 0;

 float f;

 //f = 3.40282e+38;
 cout << "The no. of bytes needed for float are" << sizeof(f) << endl;
 //f = 3.40282e+39;

 //cout << "The value of f is " << f << endl;
 //return 0;
 
 double d;

 d = 3.40282e+39;

 cout << "The value of d is " << d << endl;
  cout << sizeof(d) << endl;

 d = 1.79769e+308;
// d = 1.79770e+308;
 
 cout << "The value of d is " << d << endl;

 return 0;

 
 

}

int check_char()
{
 char ch = 'B'; //ASCII value is 65....Unicode

 cout <<  (int) ch << endl;  //explicit conversion

 char ch2 = '4';

 cout << (int) ch2 << endl;

 cout << (char) (ch+1) << endl;
 







}
