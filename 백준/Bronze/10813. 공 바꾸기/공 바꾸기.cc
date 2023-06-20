#include <iostream>
#include <algorithm>

int main(){
    int N,M = 0;
    int basket[101] = {0};
    int number = 1;

    std::cin>>N>>M;

    for (int idx = 1; idx <= N; idx++){
        basket[idx] = number;
        number++;
    }

    for(int a = 1; a <= M; a++){
        int i, j, tmp = 0;
        std::cin>>i>>j;

        tmp = basket[i];
        basket[i] = basket[j];
        basket[j] = tmp;
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