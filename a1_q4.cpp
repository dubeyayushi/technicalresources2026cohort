#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int low, high;
    cin >> low >> high;

    //write your code here
    for (int i = low; i<=high; i++){
        bool is_prime = true;
        for (int j = 2; j<i; j++){
            if (i%j==0){
                is_prime = false;
                break;
            }
        }
        if (is_prime == true){
            if (i!=0 && i!=1){
                cout << i << endl;
            }
        }
    }

}
