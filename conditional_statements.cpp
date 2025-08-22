
//WAP that takes an input of age and prints if you are adult or not.
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cin >> age;
    if(age>=18){
        cout << "you are an adult";
    }
    else if (age < 18){
        cout << "you are not an adult";

    }
    return 0;
}
*/

//else is optional.
//if (age < 18) → prints if age is less than 18.
//if (age < 10) → prints only if age is less than 10.
//If age is between 10 and 17, nothing prints because no condition matches.
//So, without else, if the if condition is false, nothing happens.

//Q= a school has following rules for gradimg system:
// a.below 25 :  F
// b.25-44 : E
// c.45-49 : D
// d.50-59 : C
// e. 60-79 : B
// f.80 - 100: A
// ask user to enter marks amd print the corresponding grade

/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int marks;
    cout << "The marks are:" ;

    cin >> marks;
    
    
    if (marks < 0 || marks > 100 ){
        cout << "Invalid marks";
    }
    else if(marks < 25){
        cout << "grades are F";
    }
    else if ( marks <= 44){
        cout << "grades are E";
    }
    else if ( marks <= 49){
        cout << "grades are D";
    }
    else if ( marks <= 59){
        cout << "grades are C";
    }
    else if (  marks <= 79){
        cout << "grades are B";
    }
    else if ( marks <= 100){
        cout << "grades are A";
    }
    return 0;

}
*/

//Your simplified else if conditions (e.g., else if (marks <= 44)) work because previous conditions (if (marks < 25)) have already filtered out lower values. For instance, if marks reaches else if (marks <= 44), it's implicitly known that marks must be at least 25 (otherwise, it would have been caught by marks < 25). This is a common and efficient way to write such conditional logic.
// IF I WRITE only if then it will check for each if how, if marks are 23 so,grades are F but the still it checks all if condition and return false as ans which is wastage of time.

//ques=take the age from the user and then decide accordingly
// 1. if age < 18,
// print -> not eligible for job
// 2. if age <= 18,
// print ->  eligible  for job
// 3. if age >= 55 and age <= 57,
// print -> eligible for job ,but retirement
// 4. if age > 57,
// print -> retirement time  

/*
#include<bits/stdc++.h>
using namespace std;
int main (){
    int age;
    cin >> age;
    if (age < 0 ){
        cout << "invalid age ";
    } 
    else if (age < 18 ){
        cout << "not eligible for job";
    }
    else if (age <= 57){
        cout << "eligible for job ";  //THIS IS LIKE NESTED IF STATEMENT.
        if (age >= 55){
            cout << "but retirement soon";
        }
    }
    else {
        cout << "retirement time ";
    }
    return 0;
}
*/

// Q-take the day no and print the corresponding day 
//for 1 print Monday.
//for 2 print Tuesday and so on for 7 print Sunday.
    
//USING IF-ELSE
/* 
    #include<bits/stdc++.h>
    using namespace std;
    int main (){
        int day ;
        cin >> day ;
        if(day  == 1){
            cout << "Monday";
        }
        else if(day  == 2){
            cout << "Tuesday";
        } 
        else if(day == 3){
            cout << "Wednesday";
        } 
        else if(day == 4){
            cout << "Thursday";
        } 
        else if(day == 5){
            cout << "Friday";
        } 
        else if(day == 6){
            cout << "Saturday";
        } 
        else if(day == 7){
            cout << "Sunday";
        } 
        else{
            cout << "Invalid day";
        }
        return 0;
}
*/

//USING SWITCH 
/*
#include<bits/stdc++.h>
    using namespace std;
    int main (){
        int day ;
        cin >> day ;
        switch(day){
            case 1:
            cout << "Monday";
            break;
            case 2:
            cout << "Tuesday";
            break;
            case 3:
            cout << "Wednesday";
            break;
            case 4:
            cout << "Thursday";
            break;
            case 5:
            cout << "Friday";
            break;
            case 6:
            cout << "Saturday";
            break;
            case 7:
            cout << "Sunday";
            break;
            default:
            cout << "Invalid day"; 
        }
        cout << "Invalid ";
    return 0;
    }
    */

//switch can be faster than if-else because it can use a jump table to go directly to the matching case instead of checking each condition one by one.
