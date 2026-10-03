#include <iostream>
using namespace std;

int main() {
    // int age = 17;
    // if(age >=18){
    //     cout << "Eligible" << endl;
    // } else{
    //      cout << "Not Eligible" << endl;
    // }

    // char vowel = 'u';
    // if(vowel == 'a'){
    //     cout << "Vowel is a" << endl;
    // }else if(vowel == 'e'){
    //     cout << "Vowel is e" << endl;
    // }else if(vowel == 'i'){
    //     cout << "Vowel is i" << endl;
    // }else if(vowel == 'o'){
    //     cout << "Vowel is o" << endl;
    // }else if(vowel == 'u'){
    //     cout << "Vowel is u" << endl;
    // }
    // else{
    //      cout << "Error" << endl;
    // }
        

    //  Nestes Condition Statements
    // if(20>10){
    //     if(30>20){
    //         cout << "Yes" << endl;
    //     }
    // }

    // Ternary Operator

    // condition ? true : false;
    // int max = (10<20) ? 1 : 0;
    // cout << max << endl;
    
    // Switch Statement

    int weekday = 5;
    switch(weekday){
        case 1:
         cout << "Monday" << endl;
         break;
        case 2:
         cout << "Tuesday" << endl;
         break;
        case 3:
         cout << "Wednesday" << endl;
         break;
        case 4:
         cout << "Thursday" << endl;
         break; 
        case 5:
         cout << "Friday" << endl;
         break; 
        case 6:
         cout << "Saturday" << endl;
         break;
        case 7:
         cout << "Sunday" << endl;
         break; 
        default :
        cout << "Error" << endl;  
    } 
    return 0;
}