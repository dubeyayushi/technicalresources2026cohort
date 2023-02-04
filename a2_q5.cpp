#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    for (int i = 0; i<=(n/2); i++){
        for (int j = (n/2); j>i; j--){
            cout << "\t";
        }
        for (int k = 0; k<(2*i+1); k++){
            cout << "*" << "\t";
        }
        cout << endl;
    }
    for (int i = 0; i<(n/2); i++){
        for (int j = 0; j<i+1; j++){
            cout <<"\t";
        }
        for (int k = n-2-(2*i); k>0; k--){
            cout << "*" << "\t";
        }
        cout << endl;
    }
}
