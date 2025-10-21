// ********     4 0 4
// ***  ***     3 2 3
// **    **     2 4 2
// *      *     1 6 1 
// **    **     2 4 2
// ***  ***     3 2 3
// ********     4 0 4

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for (int i = 0;i<n;i++){
        //STARS
        for(int j = 0;j<n-i;j++){
            cout<<"*";
        }
        //SPACES
        for(int j = 0;j<2*i;j++){
            cout<<" ";
        }
        //STARS
        for(int j = 0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for (int i = 0;i<n;i++){
        //STARS
        for(int j = 0;j<i+1;j++){
            cout<<"*";
        }
        //SPACES
        for(int j = 0;j<2*n-2*i -2;j++){
            cout<<" ";
        }
        //STARS
        for(int j = 0;j<i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    
}