#include <iostream>
#include<cmath>
using namespace std;

int main (){
    int n, k;
    cin >> n>> k;

    int num = n;
    int length = 0;
    int digit;
    int new_num = 0;

    while (num>0){
        num = num/10;
        length++;
    }
    for (int i = 0; i<k; i++){
        digit = n%10;
        n = n/10;
        new_num = digit*pow(10, length - (k-i)) + new_num;
    }

    cout << new_num + n << endl;
}
