#include <iostream>

int main(){
    int X, N = 0;

    std::cin>>X;        // total
    std::cin>>N;
    
    for (int i=0; i<N; i++){
        int a, b = 0;
        std::cin>> a >> b;
        X = X - (a*b);
    }
    if(X == 0){
        std::cout<<"Yes";
    } else{
        std::cout<<"No";
    }

    return 0;
}

