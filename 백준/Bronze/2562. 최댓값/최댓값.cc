#include <iostream>
#include <algorithm>

int main(){
    int a[9] = {0};
    int b[9] = {0};

    for(int i = 0; i < 9; i++){
        int number = 0;
        std::cin>>number;
        a[i] = number;
        b[i] = number;
    }
   
    std::sort(b,b+9);
    std::cout<<b[9-1]<<std::endl;

    int test = b[9-1];
    int indx = 1;

    for(int j = 0; j<sizeof(a)/sizeof(*a);j++){
        if(test==a[j]){
            std::cout<<indx<<std::endl;
        }
        indx++;
    }
    return 0;
}
