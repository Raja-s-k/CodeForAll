#include <iostream>
using namespace std;
class complex
{
    int real;
    int img;
    public:
    complex(int r=0,int i=0)
    {
        real=r;
        img=i;
    }
    friend complex operator +(complex c1,complex c2);
    void display(complex x)
    {
        cout<<x.real<<"+"<<x.img<<"i";
    }
};
complex operator +(complex c1,complex c2)
{
    complex temp;
    temp.real=c1.real+c2.real;
    temp.img=c1.img+c2.img;
    return temp;
}
int main()
{
    int a,b,c,d;
    cout<<"enter complex number 1=";
    cin>>a>>b;
    cout<<"enter complex number 2=";
    cin>>c>>d;
    complex c1(a,b);
    complex c2(c,d);
    complex c3;
    c3=c1+c2;
    c3.display(c3);
    return 0;
}