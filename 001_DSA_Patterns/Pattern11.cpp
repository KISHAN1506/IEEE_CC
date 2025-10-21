// 11:(MAIN)
// 1
// 01
// 101
// 0101
// 10101

// 11A:(Secondary)
// 1
// 10
// 101
// 1010
// 10101


#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    /*
    11A:x
    // 1
    // 10
    // 101
    // 1010
    // 10101
    for(int i = 0;i<n;i++){
        for(int j = 0;j<i+1;j++){
            if(j%2 == 0){
                cout<<1;
            }else cout<<0;
        }
        cout<<endl;
    }
    */
    // 1
    // 01
    // 101
    // 0101
    // 10101
    for(int i = 0;i<n;i++){
        for(int j = 0;j<i+1;j++){
            if((j+i)%2 == 0){
                cout<<1;
            }else cout<<0;
        }
    cout<<endl;
    }


    /*
    Approach 2:

    int start =1;
    for(int i =0;i<n;i++){
        if (i%2 == 0) start = 1;
        else start = 0;
        for(int j = 0;j<=i;j++){
            cout<<start;
            start = 1 - start;
        }
        cout<<endl;
    }
    */
}