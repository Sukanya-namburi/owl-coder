//sieve of eratosthenes algorithm
#include<bits/stdc++.h>
using namespace std;
int n=50;
int primes[50];
void Seive(){
    for(int i=0;i<50;i++)primes[i]=true;// initially index values are true
    primes[0]=primes[1]=false;
    for(int i=2;i<=n;i++){
        if(primes[i]==true){ //if the index value is true then make their multiples false
            for(int j=i*i;j<=50;j+=i){
                primes[j]=false;
            }
        }
    }
}
//Seive of eratosthenes is created for 0 to 50 numbers
int main() {                                                                  
    Seive();//call the function outside only once 
    int q;
    cin>>q;//no of test cases
    while(q--){
        int num;
        cin>>num;
        if(primes[num]==true){
            cout<<"prime numbeer";
        }
        else{
            cout<<"not a prime";
        }
    }
    cout<<endl;
}
