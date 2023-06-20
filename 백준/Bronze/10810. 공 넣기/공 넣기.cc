#include <iostream>
#include <algorithm>

int main(){
    int N,M = 0;
    int basket[101] = {0};

    std::cin>>N>>M;

    for(int a = 1; a <= M; a++){
        int i, j, k = 0;
        std::cin>>i>>j>>k;
        for(int b = i;b <=j; b++){
            basket[b] = k;
        }
        //check
        // std::cout<<"Basket: ";
        // for(int i = 1; i<=N; i++){
        //     std::cout<<basket[i]<<" ";

        // }
        // std::cout<<std::endl;
    }

    for(int i = 1; i <=N; i++){
        std::cout<<basket[i]<<" ";
    }
   
    return 0;
}