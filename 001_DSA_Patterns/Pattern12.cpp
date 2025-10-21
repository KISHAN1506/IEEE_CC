// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        //Number Printing:
        for(int j = 0;j<i+1;j++){
            cout << j+1;
        }
        //Spaces:
        /*
            //for space:
        you can take the first row spaces by 2n - 1 then after all iteration of j decrement the 
        space by 2.
        */
        for(int j = 0;j<(2*n)-(2*i)-2; j++){
            cout<<" ";
        }

        //Number OPP:
        for(int j = i+1;j>0;j--){
            cout << j;
        }

        cout<<endl;
    }
}
