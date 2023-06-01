#include <iostream>
using namespace std;

int main(){
    int num1, num2 = 0;

    cin>>num1>>num2;
    
    //아스키 코드를 자료형으로 바꾸려면 - '0' 하기
    cout<<num1 * (num2%10)<<endl;
    cout<<num1 * (num2%100/10)<<endl;
    cout<<num1 * (num2/100)<<endl;
    cout<<num1 * num2<<endl; //stoi 함수는 문자열을 정수로 변경해줌

    return 0;
}