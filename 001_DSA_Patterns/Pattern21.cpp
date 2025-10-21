// **** 
// *  *  Square of size 4
// *  *     see conditions like i and j == 0 and n-1 are places where * has to be printed
// ****

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(i==0||j==0||j==n-1||i==n-1){
                cout<<"*";
            }else cout<<" ";
        }
        cout<<endl;
    }
}