//segmented sieve algorithm
#include<bits/stdc++.h>
using namespace std;
long long N=10000001;
vector<bool>sieve(N,true);
void gen_Seive(){
    sieve[0]=sieve[1]=false;
    for(int i=2;i*i<=N;i++){
        if(sieve[i]==true){
            for(int j=i*i;j<=N;j+=i){
                sieve[j]=false;
            }
        }
    }
}
void get_primes(int nums,vector<int>&ds){
    for(int i=2;i<=nums;i++){
        if(sieve[i]==true){
            ds.push_back(i); // 2 3 5 7 11
        }
    }
}
int main(){
    int n;
    cin>>n;
    int L,R;
    cin>>L>>R;
    //step 1 have a simple sieve 10^6
    gen_Seive();
    //step 2 store all primes until its sqrt
    vector<int>ds;
    get_primes(sqrt(R)+1,ds);
    //step 3 have dummy vector of length R-L+1
    vector<int>dummy(R-L+1,1);
    // step 4 get the multiplies of primes you have in ds and mark them as zeroes
    for(auto it:ds){//it-2 3 5 7 11
        int firstmul=(L/it)*it;
        if(firstmul<L){
            firstmul+=it;
        }
        for(int j=firstmul;j<=R;j+=it){
            dummy[j-L]=0;
        }
    }
    for(int i=0;i<(R-L)+1;i++){
        if(dummy[i]==1){
            cout<<L+i<<" ";
        }
    }
}
