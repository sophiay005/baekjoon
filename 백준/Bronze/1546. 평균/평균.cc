#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
#include <vector>
#include <random>
#include <chrono>

using namespace std;

int main() {
    
    int n = 0;
    int aver = 0;
  
    cin>>n;
    int scores[n];

    for (int i = 0; i < n; i++){
        int score = 0;
        cin>>score;
        scores[i] = score;
    }

    sort(scores,scores+n);
    
    double total = 0;
    for (int j = 0; j < n; j++){
        total = total + double(scores[j])/scores[n-1]*100;
    }

    cout<<(total/n)<<endl;

    return 0;
} 