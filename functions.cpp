//void,non - parameterised fun.
/*
#include<bits/stdc++.h>
using namespace std;

void printName(){
    cout << "hey ,muskan" ;
}
int main(){
     printName();
return 0;
}
*/

// void,parameterised fun.
/*
#include<bits/stdc++.h>
using namespace std;

void printName(string name){

    cout << "hey ," << name;
}
int main(){
    string name;
    cin >> name;
     printName(name);
return 0;
}
*/

//Summary of Your Function Code
// You created a function called printName that takes a name as input and prints a greeting.
// In the main() function:
// You ask the user to enter their name.
// You send that name to the printName function.
// The function prints: "hey ,<name>"

// CODE-REUSABILITY -
/*
#include <bits/stdc++.h>
using namespace std;

// Function definition
void printName(string name) {
    cout << "hey, " << name << endl;
}

int main() {
    // First variable
    string name1;
    cin >> name1;          // take first input
    printName(name1);      // call function with first input

    // Second variable
    string name2;
    cin >> name2;         // take second input
    printName(name2);     // call function with second input

    return 0;
}
/*

//Summary:
// You created a function printName() that prints any string.
// You reused it for 'name1' and 'name2' without rewriting the printing code.
// The 'name' inside the function is just a local placeholder (parameter).
// Code reusability: one function, used multiple times for different inputs

//Important Point:
//The name in main and the name in printName are different variables (they just happen to have the same name).
//Their scopes are different:
//main’s name exists only in main.
//printName’s name exists only while the function runs.
//the name inside the function is a local variable (parameter), which gets a copy of the value you send when you call the function

//take  2 nos. and print its sum.
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    int num1,num2;
    int sum;
    cin >> num1 >> num2;
    sum=num1 + num2;
    cout << "the sum of 2 nos. are :"<< sum << endl;
        return 0;
}
*/

//USING RETURN  fun.
/*#include<bits/stdc++.h>
using namespace std;
int sum(int num1,int num2){  // 4 
    int num3=num1 + num2;   // 5
    return num3;             // 6
}
int main(){
    int num1,num2;            // 1
    cin >> num1 >> num2;      // 2
    int res=sum(num1,num2);   // 3 call fun.sum and goes upwards and solve it and then comes to thsi line again .
    cout << res;               // 7
    return 0;

}
*/

//USING RETURN  fun.
/*
#include<bits/stdc++.h>
using namespace std;
void sum(int num1,int num2){
    int num3=num1 + num2;   
    cout << num3;  
}
int main(){
    int num1,num2;            
    cin >> num1 >> num2;      
    sum(num1,num2);   
    return 0;
}
*/

//So:return when you want the function to give back a value and Use void when the function’s only job is to do something (like printing).

//Write a C++ program to find the maximum of two numbers using a function.
/*
#include <bits/stdc++.h>
using namespace std;

// Function to return maximum of two numbers
int maxx(int num1, int num2) {
    if (num1 >= num2) 
        return num1;
    else 
        return num2;
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;      // take input

    int maximum = maxx(num1, num2);  // call function
    cout << maximum;          // print result

    return 0;
}
*/

//Write a C++ program to find the maximum of two numbers using a user-defined function.
/*
#include <iostream>
using namespace std;

// Function that returns the maximum of two numbers
int maxx(int num1, int num2) {
    if (num1 >= num2) {
        return num1;  // returns num1 if it's greater or equal
    }
    return num2;      // otherwise returns num2
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;

    int maximum = maxx(num1, num2);  // store the returned value
    cout << "Maximum is: " << maximum << endl;

    return 0;
}
/*

//Write a C++ program to demonstrate call by value using a function.
/*
#include <iostream>
using namespace std;

// Function that modifies a copy of the number
void doSomething(int num) {
    cout << num << endl;     // prints original value
    num += 5;
    cout << num << endl;     // prints value after adding 5
    num += 5;
    cout << num << endl;     // prints value after adding another 5
}

int main() {
    int num = 10;
    doSomething(num);        // call function with num
    cout << num << endl;     // prints original num again (unchanged)
    return 0;
}
*/

//Write a C++ program to demonstrate call by value using a string.
/*
#include <iostream>
using namespace std;

// Function that modifies a copy of the string
void doSomething(string s) {
    s[0] = 't';           // change first character to 't'
    cout << s << endl;    // prints modified string
}

int main() {
    string s = "raj";     // original string
    doSomething(s);       // pass by value
    cout << s << endl;    // prints original string (unchanged)
    return 0;
}
    */
                   
// pass by reference .
/*
#include <iostream>
using namespace std;

// Function that modifies the original string using reference
void doSomething(string &s) {
    s[0] = 't';           // change first character to 't'
    cout << s << endl;    // prints modified string
}

int main() {
    string s = "raj";     // original string
    doSomething(s);       // pass by reference
    cout << s << endl;    // prints modified string again
    return 0;
}
 */

//pass by ref.

   #include <iostream>
using namespace std;

// Function that modifies the array
void doSomething(int arr[], int n) {
    arr[0] += 100;  // Add 100 to the first element
    cout << "Value inside function: " << arr[0] << endl;
}

int main() {
    int n = 5;
    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Call function
    doSomething(arr, n);

    // Print first element after function call
    cout << "Value inside int main: " << arr[0] << endl;

    return 0;
}
//other than arr all takes ref by &.
