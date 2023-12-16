#include<iostream>
#include<string>
using namespace std;

int main()
{
    char str[100];
    int len;
    cout<<"Enter length of string :";
    cin>>len;
    for(int i=0;i<len;i++)
      cin>>str[i];
    str[len]='\0';  
    int ans=0;
    for(int i=0;i<len;i++)
    {
        ans = ans*10 + ((int)str[i] - 48); 
    }
    cout<<ans<<endl;
}