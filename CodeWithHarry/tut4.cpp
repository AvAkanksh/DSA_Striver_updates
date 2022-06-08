/* Vaiable can be of various types. Primarily we have these variable types in C++:
1. Int -> -1, 2,44,10000
2. Float -> 1.21,2.001,-0.0014
3. Char -> 'a', 'z', 'K'
4. Double -> big float number with more precision
5. Boolean -> Yes or no , True or False

int sum = 23; means sum is an integer variable which holds  value 23 in memory

Variable Scope:
a) Local Variable
b) Global variable

Local Variable:
Local variable are declared inside the braces of any function and can be accessed only from there

Global Variables:
Global variable are declared outside any function and can be accessed from anywhere

Can global and local Variables have same name in c++? Yes, we will see


C++ Data types:
Data types define the type of data a variable can hold, for example an integer variable can hold integer data, a character type variable can hold character data etc.

Data types in C++ are categorised in three groups:
- Built-in -> {int float char double bool}
- User-defined -> {Stuct Union Enum}
- Derived -> {Array Function Pointer}
*/


#include<iostream>
using namespace std;
int main(){
    int a= 10;
    int b = 12;
    int c = 10, d = 12;
    
    cout<<"Tis is Tut 4";
    return 0;
}
