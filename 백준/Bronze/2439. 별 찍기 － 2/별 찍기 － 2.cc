#include <iostream>

int main(){
    int N = 0;
    std::cin>>N;
    char star = '*';
    
    for (int i=0; i<N; i++){
        for (int j=1; j<N-i;j++){
            std::cout<<" ";
        }
        for (int k=0;k<=i;k++){
            std::cout<<star;
        }
        std::cout<<"\n";
    }
    return 0;
}