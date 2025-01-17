#include <bits/stdc++.h>
using namespace std;

int commonChild(string s1, string s2) {
    int  m=s1.size();
    int n=s2.size();
    int L[m+1][n+1];
    int i,j;
    for(i=0;i<=m;i++){
        for(j=0;j<=n;j++){
            if(i==0||j==0){
            L[i][j]=0;
            }
            else if(s1[i-1]==s2[j-1]){
            L[i][j]=L[i-1][j-1]+1;
            }
            else{
                L[i][j]=max(L[i-1][j],L[i][j-1]);
            }
        }
    }
    return L[m][n];
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = commonChild(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}
