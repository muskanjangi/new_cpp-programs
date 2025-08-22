<<<<<<< HEAD
//arrays-
=======
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
>>>>>>> fdfa87c943fc9c422d208413d741304dd9a50ab2
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
<<<<<<< HEAD
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2]  >> arr[3] >> arr[4];
    cout << arr[6];  // Actually, it won’t give a random address, it will give a garbage value from memory.
    return 0;
}
/*


/*
#include<bits/stdc++.h>
using namespace std;
int  main (){
    float arr[5];   // see ,in this the array will store float type of values. 
    cin >> arr[0] >> arr[1] >> arr[2]  >> arr[3] >> arr[4];
    // arr[3] += 4; that means y can do operations in arrays  as well arrays can replace with the other value.
    // arr[3]=14; replace.
    cout << arr[3];
    return 0;
}
*/
//Input: 1 2 3 4 5
//Stored in memory: 1.0  2.0  3.0  4.0  5.0
//Output (arr[3]): 4
//if int arr[5]; and i give floating values as input, then if i give one value at index 3 (a float) and print cout << arr[3];, it will print the value trimmed to integer because arrays are of the same datatype.

//2D array -
=======
    string s1;
    getline(cin,s1);
    cout << s1;
    return 0;
}
*/

//this getline prints the string which is a  line 
//but if a string written in another line it will not print. 


//Write a C++ program to input a character using char and display it.
>>>>>>> fdfa87c943fc9c422d208413d741304dd9a50ab2
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
<<<<<<< HEAD
    int arr[3][5];     // it means there are 5 boxes placed in a consecutive manner ,and 3 times the 5 boxes basically these are the table in which 3 rows are there and 5 columns are there  .
    arr[3][4]=89;      // 2D array is used to help in solving matrix probelms and graph problems.
    cout << arr[2][1];
}
*/
=======
    char ch;
    cin >> ch;
    cout << ch;

    return 0;
}
*/

//char → stores "1 character only" → if you input `muskan`, it only takes `m`.
//string → stores a "whole word" (until a space) → if you input `muskan`, it takes the full word.
//If your program outputs `muskan`, you must be using a "string", not a char.
>>>>>>> fdfa87c943fc9c422d208413d741304dd9a50ab2
