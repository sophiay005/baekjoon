#include <iostream>

int main(){
    int N = 0;
    std::cin>>N;
    
    for (int i=1; i<=N; i++){
        int a,b = 0;
        std::cin>>a>>b;
        std::cout<<"Case #"<<i<<": "<<a+b<<std::endl;
    }
    
    return 0;
}