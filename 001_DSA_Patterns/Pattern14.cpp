// A
// AB
// ABC
// ABCD
// ABCDE

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        char let = 'A';
        for(int j = 0;j<i+1;j++){
            cout<<let;
            let++;
        }
        cout<<endl;
    }
}