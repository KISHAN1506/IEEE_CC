//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        //Space
        for(int j = 0;j<n-i-1;j++){
            cout<<" ";
        }

        /*
        // approach 2 :
        char ch ='A';
        int breakpoint = (2*i +1)/2;
        for(int j = 1;j<=2*i +1;j++){
            cout<<ch;
            if(j<=breakpoint) ch++;
            else ch--;
        }
        */

        // values:
        char ch = 'A';
        int val = (2*i)+1;
        for(int j = 0;j<val;j++){
            if(j<(val/2)){
                cout<<ch;
                ch++;
            }else{
                cout<<ch;
                ch--;
            }
        }
        //Space
        for(int j = 0;j<n-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}