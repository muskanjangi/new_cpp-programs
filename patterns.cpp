//Patterns → Nested loops
// - In the outer loop, count the no. of lines.
// - In the inner loop, focus on the columns & connect them somehow to the rows.
// - Print them ‘*’ inside the inner for loop.
// - observe symmetry (optional).

//ques-
/*

****
****
****
****

*/
//code
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cout << "*";
        }
    cout << endl;
    }
return 0;
}
*/

//ques-
/*

*
**
***
****
*****

*/
//code
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<i+1;j++){
            cout << "*";
        }
    cout << endl;
    }
return 0;
} 