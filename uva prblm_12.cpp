// uva problems no 10235
#include<iostream>
using namespace std;
int reverse(int num)
{
    int r;
    int sum=0;
    while(num!=0)
    {
        r=num%10;
        sum=sum*10+r;
        num=num/10;
    }
    return sum;
}
const int arrsize=10000000;
bool isPrime[arrsize+1];
int main(){

    for(int i=0;i<=arrsize;i++){
        isPrime[i]=true;
    }
    isPrime[0]=0;
    isPrime[1]=0;
    for(int i=2;i<=arrsize;i++){
        if(isPrime[i]==1){

            for(int j=2*i;j<=arrsize;j+=i){
                isPrime[j]=false;
            }
        }
    }
    int num;
    int rev;
    while(cin>>num&&num!=0){
        rev=reverse(num);
            if(isPrime[num] && isPrime[rev]==1 &&num!=rev){
                cout<<num<<" is emirp"<<"."<<endl;
            }
         else if(isPrime[num]==1)
            {
                cout<<num<<" is prime"<<"."<<endl;
            }
         else{
            cout<<num<<" is not prime"<<"."<<endl;
           }
        }
    return 0;
}

