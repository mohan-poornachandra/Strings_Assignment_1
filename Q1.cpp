#include<iostream>
using namespace std;

int main()
{
    string str;
    cout<<"Enter string:  ";
    getline(cin,str);
    int n = str.size();
    for(int i=0;i<n;i++)
      if(i%2) str[i]='#';

    cout<<str;  
}