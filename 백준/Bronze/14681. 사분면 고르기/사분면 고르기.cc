#include <iostream>

int main(){
    
    int a,b = 0;
    std::cin>>a>>b;
    
    if(a>0 && b>0){
        std::cout<<"1"<<std::endl;
    } else if (a<0 && b>0){
        std::cout<<"2"<<std::endl;
    } else if (a<0 && b<0){
        std::cout<<"3"<<std::endl;
    } else if (a>0 && b<0){
        std::cout<<"4"<<std::endl;
    }
    
    return 0;
}