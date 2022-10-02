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
    complex operator +(complex f)
    {
        complex temp;
        temp.real=real+f.real;
        temp.img=img+f.img;
        return temp;
    }
    void printcomplex(complex x)
    {
        cout<<x.real<<"+"<<x.img<<"i";
    }
};
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
    c3.printcomplex(c3);
    return 0;
}
