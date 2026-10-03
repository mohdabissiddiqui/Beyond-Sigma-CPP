#include <iostream>
using namespace std;

// void greet(){
//     cout << "Hello" << endl;
// }
 
int addTwoNumbers(int num1,int num2){
   return  num1 + num2 ;
}

int main() {
    // greet();
  int result =  addTwoNumbers(5,2);
  cout << result << endl;
    return 0;
}