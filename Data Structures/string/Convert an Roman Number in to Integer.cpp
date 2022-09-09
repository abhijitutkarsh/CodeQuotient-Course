
map<string, int>mp = { {'I',1},{'V',5}, {'X',10},{'L', 50}, {'C', 100}
,{'D',500}, {'M',1000}};
// I             1
// V             5
// X             10
// L             50
// C             100
// D             500
// M             1000
int romanToInt(string str) {
    int n = str.length();
    int ans =0 ;
    for(int i=1 ; i<n; i++)
    {
        if(mp[str[i-1]] < mp[str[i]])
        ans += mp[str[i]] - mp[str[i-1]];

        else
        ans+= mp[str[i-1]] + mp[str[i]];
    }
    return ans;
}