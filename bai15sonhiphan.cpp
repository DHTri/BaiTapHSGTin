#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,sum;
    cin>>n;
    long long sum2=0;
    while(n>0){
      sum=n%2;
      sum2= sum2*10+sum;
      n/=2;
    }
    cout<<sum2;
}
