#include <bits/stdc++.h>
using namespace std;
int main()
{
    //ccooooding//
    char arr[1000];
    cin.getline(arr,1000);
    int j=0;
    for(int i=1;i<strlen(arr);i++)
    {
        if(arr[i]!=arr[j])
        {
            j++;
            arr[j]=arr[i];
        }
    }
    arr[j+1]='\0';
    cout<<arr<<endl;
    return 0;
}