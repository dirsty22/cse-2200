// problem no 11547
#include<iostream>
using namespace std;
int main()
{
    int t,N1,N2;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>N1;
        cin>>N2;
            if(N1<N2)
            {
                cout<<"<"<<endl;
            }
            else if(N1>N2)
            {
                cout<<">"<<endl;
            }
            else
            {
                cout<<"="<<endl;
            }
    }
    return 0;
}
