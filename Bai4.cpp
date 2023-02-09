#include <iostream>
#include <string>
using namespace std;
const int Nmax=10000;
void lcsAlgo(string S1, string S2) 
{
  int LCS_table[S1.length() + 1][S2.length() + 1];
  for (int i = 0; i <= S1.length(); i++) 
  {
    for (int j = 0; j <= S2.length(); j++) 
    {
      if (i == 0 || j == 0)
        LCS_table[i][j] = 0;
      else if (S1[i - 1] == S2[j - 1])
        LCS_table[i][j] = LCS_table[i - 1][j - 1] + 1;
      else
        LCS_table[i][j] = max(LCS_table[i - 1][j], LCS_table[i][j - 1]);
    }
  }
  int index = LCS_table[S1.length()][S2.length()];
  char lcsAlgo[index + 1];
  lcsAlgo[index] = '\0';
  int i = S1.length(), j = S2.length();
  while (i > 0 && j > 0) 
  {
    if (S1[i - 1] == S2[j - 1]) 
    {
      lcsAlgo[index - 1] = S1[i - 1];
      i--;
      j--;
      index--;
    }
    else if (LCS_table[i - 1][j] > LCS_table[i][j - 1])
      i--;
    else
      j--;
  }
  cout <<lcsAlgo<<endl;
}
int main() 
{
  string S1,S2;
  cin.ignore();
  getline(cin,S1);
  getline(cin,S2);
      lcsAlgo(S1,S2);
  return 0;
}
