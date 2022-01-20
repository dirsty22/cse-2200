//problem no 10699
#include<iostream>
#include<vector>
using namespace std;

const int arrsize=10000000;
bool isPrime[arrsize+1];
int main(){

    vector<int> prime;
    for(int i=0;i<=arrsize;i++){
        isPrime[i]=true;
    }
    isPrime[0]=0;
    isPrime[1]=0;
    for(int i=2;i<=arrsize;i++){
        if(isPrime[i]==1){
            prime.push_back(i);
            for(int j=2*i;j<=arrsize;j+=i){
                isPrime[j]=false;
            }
        }
    }
    int num;
    while(cin>>num&&num!=0){
    int count=0;
    for(int k=0;prime[k]<=num;k++)
        {
            if(num%prime[k]==0)
            {
                count++;
            }
        }
        cout<<num<<" : "<<count<<endl;
    }
    return 0;
}

