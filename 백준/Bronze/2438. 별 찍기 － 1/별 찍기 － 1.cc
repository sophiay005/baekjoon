#include <iostream>

int main(){
    int N = 0;
    std::cin>>N;
    char star = '*';
    
    for (int i=0; i<N; i++){
        for (int j=0;j<=i;j++){
            std::cout<<star;
        }
        std::cout<<"\n";
    }
    
    return 0;
}