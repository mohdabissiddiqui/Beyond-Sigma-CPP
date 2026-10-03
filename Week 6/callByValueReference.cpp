#include <iostream>
using namespace std;

// void change(int &);

int addSum(int a, int b = 10){
    return a + b;
}
int main() {
    // cout << "Original Value" << endl;
    // int n = 10;
    // cout << n << endl;
    // change(n);
         cout << addSum(10) << endl;
    // cout << n << endl;
    return 0;
}
// void change(int &num){
//     num = 100;
//     cout << num << endl;
// }