#include <iostream>
using namespace std;

void if_test();
void for_test();
void while_test();
void do_while_test();
int out(int);



int main(){

  //if_test();
//  for_test();
//while_test();
  do_while_test();

}


void if_test(){

  int x = 9;
  /*if (x < 10){
    cout << "Value is less than 10." << endl;
  }
  else if (x > 10){
     cout << "Value is  greater than 10" << endl;
   }
  else
     cout << "Value is equal to 10" << endl;

    cout << "You can skip the braces if the body of the conditonal statement contains one statement." << endl;
  //return;

   bool flag = false;
   if(flag){
     cout << "The condition has been evaluated to true" << endl;
    }

    else{
      cout << "The condition has been evaluated to false" << endl;
    }

    cout << "The value of variable flag is " << flag << endl;*/

   //return;
   //int a = 0;

   //use of integer values as boolean
   /*int v = 0;
   if(100*0){                                                                  //use of zero and non-zero integers as boolean
        cout << "The condition has been evaluated to true" << endl;
    }

   else{
         cout << "The condition has been evaluated to false" << endl;
   }

   return;*/

  //nested conditional
   /*if (x < 10) {                                                           //demonstrating nested if statements
     if(x > 5){
        cout << "The value of x is greater than 5 and less than 10" << endl;
     }
     else{
        cout << "The value of x is less than or equal to 5" << endl;
     }
   }

   else{
         cout << "The value is greater than 10" << endl;
   }*/

    //return;

    //logical operators

    /*cout << "Checking logical \"and\" operator " << (true && true) << endl;   //and in python
    cout << "Checking logical \"or\" operator " << (true || false) << endl;   //or in python
    cout << "Checking logical \"not\" operator " << (!true) << endl;   //not in python*/

    //return;

  /*  int final_value;


    final_value = out(1) || out(1);   //short circuiting

    cout << "The final value is " << final_value << endl;

    return;*/




    char grade;
    int marks = 40;

    grade = (marks > 50) ? 'P' : 'F';                                        //use of ternary operator

    cout << "Your grade is " << grade << endl;

    return;
  }

void while_test(){

int i = 0;

while (i < 5){
  cout << i << " ";
  i++;                   //i +=1                                                                       // i += 1
}

cout << endl;
cout << "The value of i after the end of while loop is" << i << endl;
cout << "The value of i using expression i++ is " << i++ << endl;   //post incremennt
cout << "The value of i after the expression i++ is executed is " << i << endl;
cout << "The value of i using expression ++i is " << ++i << endl;

                                                    //demonstrating the difference between i++ and ++i
}

void for_test(){

 for(int i=0; i<5; i++){
    cout << i << " ";

 }
  cout << endl;

}

void do_while_test(){

  int i = 0;
  do{
    cout << i << " ";
    i += 1;
  } while (i<5);

  cout << endl;
}

int out(int x){
  cout << "-- The value given is " << x << endl;
  return x;
}
