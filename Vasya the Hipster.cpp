#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a;
    cin>>b;

    int res1=0,res2=0;

    int i;
    while(1)
    {
        if(a>0 && b>0){res1++; a--; b--;}
        else if(a==0 && b>=2){res2++; b=b-2;}
        else if(b==0 && a>=2){res2++; a=a-2;}
        else if(a==0 && b<=1){break;}
        else if(b==0 && a<=1){break;}
    }
    cout<<res1<<" "<<res2;


    return 0;
}





