#include <bits/stdc++.h>
using namespace std;
bool ispalindrome(char arr[])
{
    int i=0;
    int j=strlen(arr)-1;
    while(i<j)
    {    
        if(arr[i]==arr[j])
        {
            i++;
            j--;
        }
        else
        return false;
    }
    return true;
}
int main()
{
    char arr[1000];
    cin.getline(arr,1000);
    if(ispalindrome(arr))
    {
        cout<<"palindromic string"<<endl;
    }else
    cout<<"not a palindromic string"<<endl;
    return 0;
}
