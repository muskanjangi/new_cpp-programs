//arrays-
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
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
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][5];     // it means there are 5 boxes placed in a consecutive manner ,and 3 times the 5 boxes basically these are the table in which 3 rows are there and 5 columns are there  .
    arr[3][4]=89;      // 2D array is used to help in solving matrix probelms and graph problems.
    cout << arr[2][1];
}
*/
