// uva problem no 11332 - Summing Digits
#include<iostream>
using namespace std;
int main()
{
    int N;
    while(cin>>N && N!=0)
    {
        int temp=N;
        while((temp/10)>0)
        {
            int sum=0;
            while(N>0){
            sum+=N%10;
            N/=10;
            }
        temp=sum;
        N=temp;
        }
    cout<<temp<<endl;
    }
    return 0;

}
