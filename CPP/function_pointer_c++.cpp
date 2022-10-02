#include<iostream>
using namespace std;
int maxim(int x,int y)
{
    return x>y?x:y;
}
int minim(int x,int y)
{
    return x<y?x:y;
}
int main ()
{
    int a=18,b=24;
    int (*fp)(int,int);
    fp=maxim;
    cout<<"\t\t\t\t\t\tmaximum="<<(*fp)(a,b);
    fp=minim;
    cout<<"\n\t\t\t\t\t\tminimum="<<(*fp)(a,b);
    return 0;
}
