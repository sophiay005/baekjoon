#include <iostream>

int main(){
    
    int a = 0;
    std::cin>>a;
     
    for (int i=0; i<a; i++){
        int b,c = 0;
        std::cin>>b>>c;
        std::cout<<b+c<<std::endl;
    }

    return 0;
}

