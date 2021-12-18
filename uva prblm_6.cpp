#include<iostream>
using namespace std;
int main()
{
    int C,N,i,j;
    float mark[1000],avg,abv_n,sum,result;
    cin>>C;
    for(i=0;i<C;i++)
    {
        sum=0;
        cin>>N;
        for(j=0;j<N;j++)
        {
        cin>>mark[j];
        sum +=mark[j];
        }
        avg=sum/N;
        abv_n=0;
        result=0;
        for(j=0;j<N;j++)
        {
            if(mark[j]>avg)
            {
                abv_n++;
            }
        }
        result=abv_n/N*100;
        printf("%.3f",result);

        cout<<"%"<<endl;

    }



}
