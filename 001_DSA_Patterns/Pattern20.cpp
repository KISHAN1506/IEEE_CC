// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *



// *      *   1 8 1
// **    **   2 6 2  
// ***  ***   3 4 3
// ********   4 2 4
// ***  ***   3 4 3
// **    **   2 6 2  
// *      *   1 8 1


#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int space = 2*n -2;
    //Attempt 3:
    for(int i = 1;i<=2*n;i++){
        int star = i;
        if(i>(2*n+1)/2) star = (2*n)-i;
        for(int j = 0;j<star;j++){
            cout<<"*";
        }

        //SPACE
        for(int j = 0;j<space;j++){
            cout<<" ";
        }
        if(i<n) space -= 2; //MOST IMPORTANT STEP
        else space+=2;





        for(int j = 0;j<star;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    // Attempt 2 FAILED:
    // int space = 2*n -2;
    // for(int i = 0;i<2*n +1;i++){
    //     int star = i+1;
    //     if(i>((2*n)/2)-1) star = 2*n -i;
    //     //STAR: 
    //     for(int j = 0;j<star;j++){
    //         cout<<"*";
    //     }

    //     //spaces:
    //     for(int j = 0;j<space;j++){
    //         cout<<" ";
    //     }
    //     if (i < n-1) space-=2;
    //     else space +=2;

    //     //STAR:

    //     for(int j = 0;j<star;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // Attempt 1 but failed trying again
    // int spce = 2*(n-1);
    // for(int i = 0;i<2*n +1;i++){
    //     //STARS
    //     int stars;
    //     if (i<(2*n)/2) stars = i;
    //     else stars = 2*n - i;
    //     for(int j = 0;j<stars ;j++){
    //         cout<<"*";
    //     }
    //     //SPACES:
    //     for(int j = 0;j<spce ;j++){
    //         cout<<" ";
    //     }
    //     //STARS
    //     int stars2;
    //     if (i<(2*n)/2) stars2 = i;
    //     else stars2 = 2*n - i;
    //     for(int j = 0;j<stars2;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    //     if (i<n) spce -=2;
    //     else spce += 2;
    // }
}