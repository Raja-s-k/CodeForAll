#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char arr[1000];
    char largest[1000];
    cin.get();
    int length,largest_len=0;
    while(n!=0)
    {
        cin.getline(arr,1000);
        length=strlen(arr);
        if(length>largest_len)
        {
            largest_len=length;
            strcpy(largest,arr);
        }
        n--;
    }
    cout<<"length of largest string i.e "<<largest<<" is " <<largest_len<<endl;
    return 0;
}