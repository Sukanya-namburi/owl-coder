                                                                    //Recursion
#include<bits/stdc++.h>
using namespace std;
void print(int count,int n){
    if(count>=n){ //base case
        return;
    }
    cout<<"amma"<<" ";
    print(count+1,n);
}
int main() {
    int n;
    cin>>n;
    print(0,n);
}

//printing numbers from 1 to n.
#include<bits/stdc++.h>
using namespace std;
void fun(int x,int n){
    if(x>n){ //base case
        return;
    }
    cout<<x;
    fun(x+1,n);
}
int main() {
    int n;
    cin>>n;
    fun(1,n);
}

//printing numbers from n to 1.
#include<bits/stdc++.h>
using namespace std;
void fun(int x,int n){
    if(x<n){ //base case
        return;
    }
    cout<<x;
    fun(x-1,n);
}
int main() {
    int n;
    cin>>n;
    fun(n,1);
}

//printing numbers from 1 to n (using backtracking)
#include<bits/stdc++.h>
using namespace std;
void fun(int n){
    if(n==0){ //base case
        return;
    }
    fun(n-1);
    cout<<n;
}
int main() {
    int n;
    cin>>n;
    fun(n);
}

//method-1
//to find sum of digits of a number
#include<bits/stdc++.h>
using namespace std;
int fun(int N,int sum){
    if(N==0){
        return sum;
    }
    sum+=N%10;
    fun(N/10,sum);
}
int main() {
    int N;
    cin>>N;
    cout<<fun(N,0);
}

//method-2 
//to find sum of digits of a number
#include<bits/stdc++.h>
using namespace std;
int fun(int N){
    if(N==0){
        return 0;
    }
    return N%10+fun(N/10);
}
int main() {
    int N;
    cin>>N;
    cout<<fun(N);
}

//method-1
//to count digits of a number
#include<bits/stdc++.h>
using namespace std;
int fun(int N,int count){
    if(N==0){
        return count;
    }
    count+=1;
    fun(N/10,count);
}
int main() {
    int N;
    cin>>N;
    cout<<fun(N,0);
}

//method-2
//to count digits of a number
#include<bits/stdc++.h>
using namespace std;
int fun(int N){
    if(N==0){
        return 0;
    }
    return 1+fun(N/10);
}
int main() {
    int N;
    cin>>N;
    cout<<fun(N);
}
