// uva problem no 913
#include<iostream>
using namespace std;
int main()
{
    long long int num;
    int sum=0;
    while(cin>>num){
    //int sum=0;
        num=(num+1)/2;
        num=num*num;
        int s=1+(num-1)*2;
        sum=s+(s-2)+(s-4);

    cout<<sum<<endl;
    }
    return 0;
}
