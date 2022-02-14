// uva problem 11461
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b;
    int result=1;
    while(cin>>a>>b)
    {
        if(a==0&&b==0){
            break;
        }
        int count=0;
        for(int i=a;i<=b;i++)
        {
            result=sqrt(i);
            if(result*result==i){
                 count++;
             }
        }
        cout<<count<<endl;
    }
return 0;
}
