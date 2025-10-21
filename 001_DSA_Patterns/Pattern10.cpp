// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    //instead of writing 2 different loops by giving conditions
    // I will be defining stars value at conditions here itself
    
    for(int i =0;i<(2*n+1);i++){
        int star = i;
        if(i>n) star = (2*n)-i;
        for(int i = 0;i<(star+1);i++){
            cout<<"*";
        }
        cout<<endl;
    }
}