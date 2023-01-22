#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    for (int i = 0; i<n; i++){
        for (int j = 0; j<i; j++){
            cout << " " << "    ";
        }
        for (int k = 0; k <=n-i; k++){
            cout << "*" << "    ";
        }
        cout << endl;
    }
}
