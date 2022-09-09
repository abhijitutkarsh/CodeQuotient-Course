#include<bits/stdc++.h>
using namespace std;
// abcd abc X y  c
// 0123456789 10 11
// abc
// 012
int keywordCount(string str, string word) {
    int n = str.length();
    int m = word.length();
    int count=0;
  for(int i  = 0 ; i<n ; i++)
  {
    int mismatch = 0;
    if(str[i] != ' ')
    {
        for(int j =0; j<word.length(); j++)
        {
            if(i<n and j<m and str[i] == word[j])
            i++;
            else
            {
            mismatch = 1;
            break;
            }
        }
        if(mismatch == 0 and str[i] == ' ')
        count++;
        else{
        while(i<n and str[i] != ' ')
        i++;
        }

        cout<<i<<endl;

    }
//    cout<<i<<endl;
  }
  return count;
}















int main()
{
    string a,b;
    cin>>a>>b;
cout<<keywordCount(a,b);
return 0; 
}