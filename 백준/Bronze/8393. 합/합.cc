#include <iostream>

int main(){
    
    int a = 0;
    int sum = 0;
    std::cin>>a;
     
    for (int i=1; i<=a; i++){
        sum += i;
    }
    std::cout<<sum<<std::endl;

    return 0;
}

