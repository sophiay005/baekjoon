#include <iostream>

int main(){
    
    int a,b,c = 0;
    std::cin>>a>>b>>c;
     

    if (b+c<60){
        std::cout<<a<<" "<<b+c;
    } else if ((b+c)%60==0){
        a = a+((b+c)/60);
        if(a>23){
            std::cout<<a-24<<" "<<(b+c)%60;
        }
        else {
            std::cout<<a<<" "<<(b+c)%60;
        }
    } else if(b+c>=60) {
        a = a+((b+c)/60);
        if(a>23){
            std::cout<<a-24<<" "<<(b+c)%60;
        }
        else {
            std::cout<<a<<" "<<(b+c)%60;
        }
    }
    
    
    return 0;
}

