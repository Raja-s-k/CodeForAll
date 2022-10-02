#include<iostream>
using namespace std;
class rational
{
    int numerator;
    int denominator;
    public:
    rational(int p=0,int q=1)
    {
        numerator=p;
        denominator=q;   
    }
    rational add(rational f)
    {
        rational temp;
        temp.numerator=numerator*f.denominator+denominator*f.numerator;
        temp.denominator=denominator*f.denominator;
        return temp; 
    }
    void display(rational h)
    {
        cout<<h.numerator<<"/"<<h.denominator;
    }
};
int main()
{
    int a,b,c,d;
    cout<<"enter 2 rational numbers";
    cin>>a>>b>>c>>d;
    rational r1(a,b);
    rational r2(c,d);
    rational r3;
    r3=r1.add(r2);
    r3.display(r3);
    return 0;
}