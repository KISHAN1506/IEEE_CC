// Main pattern:
// E
// DE
// CDE
// BCDE
// ABCDE

// (Extra)
// E
// ED
// EDC
// EDCB
// EDCBA

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

// E
// ED
// EDC
// EDCB
// EDCBA
    // for(int i = 0;i<n;i++){
    //     char ch = 64 + n;
    //     for(int j = 0;j<i+1;j++){
    //         cout<<ch;
    //         ch--;
    //     }
    //     cout<<endl;
    // }

    for(int i = 0;i<n;i++){
        char ch = 64+n;
        
        char chn = ch-i;
        for(int j = chn ;j<=ch;j++){
            cout<<chn;
            chn++;
        }
        cout<<endl;
    }
}