// Return the final string after expansion
string expandString(string str) {
  string s = "";
  int n = str.length();
  for(int i =0 ;i<str.length() ; i++)
  {
    if(str[i]>='a' and str[i]<='z')
    { s+=str[i];continue;}
    
    
    int count =0;
   	int subLength =0;
    int j= i;
    
    while(j<n and str[j]-'0'>=0 and str[j]-'0'<=9)
    {
      subLength++;
      j++;
    }
    string temp = str.substr(i, subLength );
    count = stoi(temp)-1;
    
    
    while(count--){
      s+= str[i-1];
    }
    i= j-1;
  }
  return s;
}