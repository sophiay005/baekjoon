#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int students[31] = {0};
    
    for(int i = 0; i <28; i++){
        int student = 0;

        cin >> student;
        students[student] = 1;
    }
    
    for(int j = 1; j <= 30; j++){
        if(students[j] != 1){
            cout<<j<<endl;
        }
    }
}