/*
QUESTION:
555555555
544444445
543333345
543222345
543212345
543222345
543333345
544444445
555555555

4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4


For Solving subtract 4 from every element

0 0 0 0 0 0 0
0 1 1 1 1 1 0 
0 1 2 2 2 1 0
0 1 2 3 2 1 0
0 1 2 2 2 1 0
0 1 1 1 1 1 0
0 0 0 0 0 0 0
MAKE THIS then add 4(n)
Find the min distance from left right top bottom and print
*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int i =0;i<2*n - 1;i++){
        for(int j =0;j<2*n - 1;j++){
            int top = i;
            int left = j;
            int right = (2*n -1 -1)-j; 
            int bottom = (2*n -1 -1)-i;
            // Since min func accept only 2 values:
            cout<<n-min(min(top,left),min(right,bottom))<<" "; 
        }
        cout<<endl;
    }
}