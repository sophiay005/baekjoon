#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[42] = {0};
    int cnt = 0;
    
    for(int i = 0; i <10; i++){
        int number = 0;
        cin >> number;
        arr[number%42]++;
    }

for (int k=0; k < 42;k++){
    if(arr[k] != 0){
        cnt++;
    }
}

cout << cnt;
return 0; 

}

