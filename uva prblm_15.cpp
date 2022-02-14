// uva problem no 11152
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cmath>
using namespace std;
int main()
{
    double a,b,c,s,PI,r,vio,rose,R,sunf;
   while(cin>>a>>b>>c)
    {
        PI=acos(-1);
        s=(a+b+c)/2.0;
        vio=sqrt(s*(s-a)*(s-b)*(s-c));
        r=sqrt((s-a)*(s-b)*(s-c)/s);
        rose=r*r*PI;
        double A=acos((b*b+c*c-a*a)/(2*b*c));
        R=a/(2*sin(A));
        sunf=R*R*acos(-1)-vio;
        vio=vio-rose;
        printf("%.4lf %.4lf %.4lf\n",sunf,vio,rose);
    }
    return 0;
}

