#include <iostream>

int main(){
    
    int b,c = 0;

    for (;;){
        std::cin>>b>>c;
        if(std::cin.eof() == true){
            break;
        }
        std::cout<<b+c<<std::endl;
    }

    return 0;
}
