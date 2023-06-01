#include <iostream>

int main(){
    
    int a,b = 0;
    std::cin>>a>>b;
    
    if(0<=a and a<=23 and 0<=b and b<=59){
        if (b>=45){
            std::cout<<a<<" "<<b-45;
        } else if (b<45){
            if (a-1>=0){
                std::cout<<a-1<<" "<<b+15;
            }
            else{
                std::cout<<23<<" "<<b+15;
            }
        }
    }
    else{
        std::cout<<"not a time";
    }
    
    return 0;
}

