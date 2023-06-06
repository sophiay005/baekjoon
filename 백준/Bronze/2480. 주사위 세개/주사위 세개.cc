#include <iostream>

int main(){
    
    int a,b,c = 0;
    std::cin>>a>>b>>c;
     

    if (a==b && b==c){
        std::cout<<10000+a*1000;
    } else if (a==b && b!=c){
        std::cout<<1000+a*100;
    } else if (a==c && b!=c){
        std::cout<<1000+a*100;
    } else if (c==b && b!=a){
        std::cout<<1000+c*100;
    } else if (a!=b && b!=c){
        // if (a>b && a>c){
        //     std::cout<<a*100;
        // } else if (b>a && b>c){
        //     std::cout<<b*100;
        // } else if (c>a && c>b){
        //     std::cout<<c*100;
        // }
        int m = 0;

        m = std::max(a,std::max(b,c));
            std::cout<<m*100;
    }
    
    
    return 0;
}

