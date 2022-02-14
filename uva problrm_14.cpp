//uva problem no 11483
#include<iostream>
#include<string>
using namespace std;
int main(){
    int i=0;
    int n;
    for(i=1;cin>>n&&n!=0;i++){
        cout<<"Case "<<i<<":"<<endl;
        cout<<"#include<string.h>"<<endl;
        cout<<"#include<stdio.h>"<<endl;
        cout<<"int main()"<<endl;
        cout<<"{"<<endl;
        cin.ignore();
        for(int j=0;j<n;j++){
            cout<<"printf(\"";
            string str;
            getline(cin,str);
            for(int k=0;k<str.length();k++)
            {
                if(str[k]=='"'||str[k]=='\\')
                {
                     cout<<"\\";
                }
              cout<<str[k];
            }

            cout<<"\\n\");"<<endl;
          }
        cout<<"printf(\"\\n\");"<<endl;

        cout<<"return 0;"<<endl;

        cout<<"}"<<endl;

    }

    return 0;
}

