#include <iostream>

int main(){
    
    int a,b = 0;
    std::cin>>a>>b;
    int arr[a];

    for (int i = 0; i < a; i++){
        std::cin>>arr[i];
    }
    for (int j = 0; j < a; j++){
        if (arr[j]<b){
            std::cout<<arr[j]<<" ";
        }
    }

    return 0;
}
