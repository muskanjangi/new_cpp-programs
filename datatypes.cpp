//Write a C++ program to take two strings as input (separated by space) and display them.

/* #include<bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    cin >> s1 >> s2;
    cout << "this is a string :" << s1 << "and this is another string:" << s2;
    return 0;
*/

// if u re telling hey muskan,so,hey before space is a string and also after space this is also a string so,u have to consider it a new string tjat's why u have to mention s1 and s2.
    
//Write a C++ program to input a string and display it.
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1;
    cin >> s1 ;
    cout << "this is a string :" << s1 ; 
    return 0;

}
*/

// if i/p is "hii muskan".But,it will only print "hii".
//The code works correctly for a single word.
//But if you want to take the whole line including spaces (hii muskan together), you should use getline instead of cin.

//Write a C++ program to input a full line of text (including spaces) and display it.
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    getline(cin,s1);
    cout << s1;
    return 0;
}
*/

//this getline prints the string which is a  line 
//but if a string written in another line it will not print. 


//Write a C++ program to input a character using char and display it.
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    cin >> ch;
    cout << ch;

    return 0;
}
*/

//char → stores "1 character only" → if you input `muskan`, it only takes `m`.
//string → stores a "whole word" (until a space) → if you input `muskan`, it takes the full word.
//If your program outputs `muskan`, you must be using a "string", not a char.
