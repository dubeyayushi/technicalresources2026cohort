#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    int count = 1;
    int new_num = 0;
    while (n>0){
        int num = (n%10);
        n = n/10;
        new_num = (count*pow(10,num-1)) + new_num;
        count++;
    }
    cout << new_num << endl;
}
