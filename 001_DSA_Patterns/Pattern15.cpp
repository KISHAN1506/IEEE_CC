// ABCDE
// ABCD
// ABC
// AB
// A

// 15A:
// EDCBA
// EDCB
// EDC
// ED
// E

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    /*
    // EDCBA
    // EDCB
    // EDC
    // ED
    // E
    for(int i = 0;i<n;i++){
        char let = 64+n;
        for(int j = 0;j<n-i;j++){
            cout<<let;
            let--;
        }
        cout<<endl;
    }

    */
    // ABCDE
    // ABCD
    // ABC
    // AB
    // A
    for(int i = 0;i<n;i++){
        char let = 'A';
        for(int j = 0;j<n-i;j++){
            cout<<let;
            let++;
        }

        cout<<endl;
    }    
}