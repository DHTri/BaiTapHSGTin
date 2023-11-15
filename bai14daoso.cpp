#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,sum;
    cin >> n;
    int sum2 = 0;
    while(n > 0){
        sum = n%10;
        sum2 = sum2*10+sum ;
        n /=10;
    }
    cout << sum2;
}
