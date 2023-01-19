#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int num1, num2;
    cin >> num1 >> num2;

    //write your code here
    int gcd = 1, lcm = 1;
    for (int i = 1; i<=num2 || i <=num1; i++){
        if (num1%i==0 && num2%i ==0){
            gcd = i;
        }
    }
    lcm = (num1*num2)/gcd;
    cout << gcd << endl;
    cout << lcm << endl;
    
}
