//keyword reference - https://www.w3schools.com/c/c_ref_keywords.php
//this line will always be needed, its a header file library 
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
/*
enables these functions:
sqrt(x)
ceil(x)
floor(x)
pow(x, y)
*/


//this is a function, anything inside it will be executed

int main() {
  myFunction();
  //this prints, just like java you need to end with ;
  printf("Hello World! \npretty cool this works");
  //use \n to add a new line, \t for a tab, \\ for backslash, \" for quotes"
 
 //type variableName = value;
  int a = 1;
  int b;
  int m = a = 19;
  /*
  can declare multiple variables with a comma in between, no need to declare type again
  can also assign multiple variables the same value
  cannot do printf(a), printf is literally print format
  so we must also do the "%d", a thing
  %d or %i for int, %c for char, %f or %F for float, %s for string, %lf for double
  float used for 5 or 6 decimal digits, double for 15
  use %.xf to print out x digits after decimal points
  */
  printf("this language is so weird, here's the number %d", a);
  /*sizeof(varnName) is used to find how many bytes a var takes up, when displaying us %lu
  implicit conversion is done by the compiler, e.g placing a float while declaring int
  explictit conversion is done with brackets around the tyoe being converted

  adding const before a variable declaration makes it a constant, you must assign it a variable immediately

  all the operators are same as java except decrement is ++/-- before the variable
  c also has the += or -= or ^=, &=, |=, >>=
  use bool to declare a boolean
  must use #include <stdbool.h>

  if else loops are just like java
  if (condition) {

  }
  there's also the ternary expression 
  condition ? ifTrue : ifFalse;

  switch statmenets
  switch (expression){
    case x:
      //something
    break;
    default:
      //if no conditions met
  }

  while loops and for loops are literally the same as java
  remember about do-while loops
  do {
    //this runs before checked
  }
  while(condition);

  break; is used to jump out of a loop
  continue; breaks the current iteration


  declaring arrays is also like java 
  type name[] = {insert, values, here};
  type name[size];
  also use index zero as first value and to access go to name[index]
  can't change array size after creation

  sizeof(array) just multiplies number of elements by the number of bytes each element takes up
  to get the length of an array you could do sizeof(array)/sizeof(array[0])
  there's also 2d arrays with name[rows][columns]
  to loop through use nested loops

  THERE IS NO STRING IN C, use an array with a char but use " instead of '
  however, you still use %s to output

  char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
  must include the \0 at the end, it's the null terminating character and tells C we're done
  when using sizeof() it includes the inherent \0 even if it's not explicitly stated
  add backslash(\) for special characters like \, ', " 

  you can use #include <string.h> to do some string functions
  strlen() - doesn't count the \0 
  sizeof() - count's the actual size of the array, so even empty unfilled spaces
  strcat() - used to concat strings and stores answer in string1
  strcpy(copyTo, copyFrom) - copies one string value to another
  strcmp() - zero if both strings are the same

  type1 name1;
  type2 name2;
  scanf("%type1 %type2", &name1, &name2) - used for inputs
  now name1 and name2 are assigned the variables you used

  for a string, you need to create an array char and give it a pre determined size
  for white spaces, it treats it like you're ending so it only keeps the first word


  char fullName[30];
  printf("Type your full name: \n");
  fgets(fullName, sizeof(fullName), stdin);
  printf("Hello %s", fullName);

  use scanf() to get a single word
  use fgets() for a whole line

  memory address is literally the address of a variable in memory

  use %p for displaying pointers, it's generally used to find the memory address for a variable
  use a &before the variable name to refer to the memory address

  a pointer is a variable that stores the memory address of another variable as its value
  to create a pointer
  type* name = &reference
  type *name = &reference


  deference operator basically converts the pointer back into the normal variable type 
  so *name displays the actualy value of the pointer

  the name of an array points to the first data point in the array, effictively making them have the same memory address
  so to fetch incrementing values, just get the first element and add 1
  
  this means, when you just type in var it will give you the pointer to the first value in var
  so you can print the first value in var with *var because that will dereference it and give the value instead of the memory address
  to find subsequent values, do var+i to get the ith value, it's basically like doing var[i] and remember to dereference to get the value

  can also change values with pointers
  *arr = x
  would change the first value in arr into x
  
  C also has enums, the enums are all constants and must be created in a different file

  enum enumName {
    ENUM1 = value,
    ENUM2 = value,
    ENUM3 = value
  };
  by default, the first item in an enum has the variable value of 0, printing the enum value will give its variable value
  however, if you change the first enums value, the subsequent values will be one more

  to access an enum in the main file 
  enum enumName varName = valueInEnumClass;

  

  */

 //this ends the function
return 0;
}

/*
to create a function it's similar to java, except for arrays in parameters 
unlike java, C can actually change global variables because it is pass by reference
naming is counter intuitive
java - pass by value so changing a value in a function doesn't do anything to the global variable because the reference
from the original variable still points towards the old value
C - pass by reference so changing the value actually changes what the initial variable was pointing at
so when we call the orignal variable we actually change it's reference value
void myFunction(type name[]) {
  printf("THIS WORKS");
}
*/

/*
structures are a way to group several related variables into one place, a structure can contain lots of different data types

struct myStructure{
  int a;
  char b;
  char[30] words;
};

in order to access the structure you need to create a variable for the structure itself in the main method

int main() {

struct myStructure s1 = {1, 'a', "word"};
//you can also assin multiple values to multiple variables during declaration, string doesn't need strcpy()

s1.a = x;
strcpy(s1.words, "storeInStruct")

can also copy a struture over

return 0;
}
to access the variables within a strucutre, use .
so you can create multiple versions that have the same layout, like profiles
can't just assign a string value to the char[], instead use the strcpy()
to modify, same as access: use the . syntax


*/

/* FINAL IMPORTANT THINGS ABOUT MEMORY 
static or compile time memory is pre-allocatred memory before the progran runs
so C automatically creates some memory for the variables you initally declare
thing is, if you have 20 spots for an array, C will allocate 80 bytes, 4 for each student
but if there are only 10 students then we're just slowing down the program 

dynamic or runtime memory - memory that's allocated after the program runs
we can write code that gives us full control at any time
dynamic memory is only accessible by pointers 
must include <stdlib.h> to use malloc() or calloc(), these functions allocate some memory and return a opointer to it's address
malloc(size) - size speicifies how much memory to allocate in bytes
calloc(amount, size) - amount specifies amount of items to allocate and size specifies size of each item in bytes

make sure to write something into malloc before reading it
calloc writes zeros into all allocated memory so it won't give errors but might might the program slower
best way to allocate memory is just to use sizeof(*ptr) in place of size, remember the * becuase if there's no dereference it will give size of pointer which is normally 8bytes

the sizeof operator cannot measure allocated dynamic memory, it only gives size of data type of memory.

stack memory - type of dynamic memory that's reserved for variables declared in funtions
variables declared in a function use stack and not static memory
when a function is called the stck memory is allocated for the variables but when it returns the memory is freed

stack overflow - when a recursion happens too many times and takes up too much stack memory

*/