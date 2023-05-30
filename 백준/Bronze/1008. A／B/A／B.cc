#include <iostream>
using namespace std;

int main(){
    double A, B = 0;

    cin>>A>>B;

    // fix to 9 decimal places
    cout<<fixed;
    cout.precision(9);

    cout<<A/B;
    
    return 0;
}