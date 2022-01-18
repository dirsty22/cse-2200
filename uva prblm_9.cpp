//uva problem no 900
#include<iostream>

#include<iostream>
using namespace std;
int main()
{
    int n;
    long long fibo[51];
    fibo[1]=1;
    fibo[2]=2;
    for(int i=3;i<=50;i++)
            {
                fibo[i]=fibo[i-1]+fibo[i-2];
            }
    while(cin>>n && n!=0){

        cout<<fibo[n]<<endl;
    }

}

