#include<iostream>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int len=s.size();
    bool ans=true;
    for(int i=0;i<len/2;i++)
      if(s[i]!=s[len-1-i]){
        ans=false;
        break;
      }

    if(ans) cout<<"YES";
    else cout<<"NO";  
}