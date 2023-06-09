#include <iostream>

int main(){
    
    int b = 0;
    std::cin>>b;
    int arr[b];

    for (int i = 0; i < b; i++){
        std::cin>>arr[i];
    }

    int v, c=0;
    std::cin >> v;
    
    for (int j = 0; j < b; j++){
        if (arr[j]==v){
            c++;
        }
    }
    std::cout<<c;

    return 0;
}
