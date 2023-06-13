#include <iostream>
#include <algorithm>

int main(){
    
    int a = 0;
    std::cin>>a;
    int numbers[a];
    
    for (int i=0;i<a;i++){
        std::cin>>numbers[i];
    }

    std::sort(numbers,numbers+a);
    std::cout<<numbers[0]<<" "<<numbers[a-1]<<std::endl;

    return 0;
}
