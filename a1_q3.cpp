#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int t;
    cin >> t;

    //write your code here
    int n;
    bool is_prime = true;
    for (int i = 0; i<t; i++){
        cin >> n;
        for (int j = 2; j<n; j++){
            if (n==2){
                is_prime = true;
            }
            else if (n%j==0){
                is_prime = false;
                break;
            }
            else{
                continue;
            }
        }
        if (is_prime){
            cout << "prime" << endl;
        }
        else{
            cout << "not prime" << endl;
        }
    }
}
