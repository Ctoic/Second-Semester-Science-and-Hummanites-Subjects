#include <iostream>
using namespace std;

void array_test();
void array_mutability_test(int[]);
void array_2d_test();
void struct_test();

int main(){

//  array_test();
  //array_2d_test();
  struct_test();



  return 0;





}

void array_test(){



  int arr[5];

  cout << "Before assignment, values are " << endl;
  for(int i=0; i<5; i++){
    cout << arr[i] << " ";
  }

  cout << endl;

  //return;
  /*float x;

  cout << "Value of uninitialized variable x is" << x << endl;
  return;*/

  cout << endl;

  for(int i=0; i<5; i++){
    arr[i] = i*i;
  }

  cout << "After assignment, values are " << endl;
  for(int i=0; i<5; i++){
    cout << arr[i] << " ";
  }

  cout << endl;

  //return;
  int arr2[5] = {0};     //initializer list

  cout << "After initialization with 0, values are " << endl;
  for(int i=0; i<5; i++){
    cout << arr2[i] << " ";
  }

  cout << endl;
  //return;
  int arr3[] = {0,1,2,3,4};

  cout << "After initialization with different values " << endl;
  for(int i=0; i<5; i++){
    cout << arr3[i] << " ";
  }

  cout << endl;
  //return;
  array_mutability_test(arr3);

  cout << "After fucntion call, the values are " << endl;

  for(int i=0; i<5; i++){
    cout << arr3[i] << " ";
  }

  cout << endl;
  //return;
  //findling length of array using sizeof()
  cout << "The size of array in bytes is " << sizeof(arr3) << endl;
  cout << "The length of array is " << sizeof(arr3)/sizeof(arr3[0]) << endl;

}

void array_mutability_test(int arr4[5]){


for(int i=0; i<5; i++){
  arr4[i] = i*3;
 }

}

void array_2d_test(){

  int arr[2][3] = {{1,2,3},{4,5,6}};

  for(int i=0; i<2; i++){
    for(int j=0; j<3; j++){
      cout << arr[i][j] << " ";

    }
  }
    cout << endl;

}

void struct_test(){

  struct student{
    int roll_no;
    float marks;
  };

  student s1;
  s1.roll_no = 1001;
  s1.marks = 45.5;

  student s2;
  s2.roll_no = 1002;
  s2.marks = 85.5;

  cout << "Student with roll no " << s1.roll_no << " has " << s1.marks << endl;

  //findling length of struct using sizeof()
  cout << "The size of structure \"student\" in bytes is " << sizeof(student) << endl;

  return;
  student students[10];

  //findling length of array using sizeof()
  cout << "The size of array \"students\" in bytes is " << sizeof(students) << endl;





}
