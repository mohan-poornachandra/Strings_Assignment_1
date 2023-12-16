#include<iostream>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    int len=str.size();
    string s=str;
    int i=len/2,j=len-1;
    while(i<len)
    {

      str[i]=s[j];
      i++;j--;
    }
    cout<<str<<endl;
}