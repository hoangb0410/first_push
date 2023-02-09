#include <iostream>
#include <string>
const int Nmax=10000;
using namespace std;
string xoadaucuoi(string s)
{
    int k=0;
    while (s[k]==' ')
        k++;
    int e=s.length()-1;
    while (s[e]==' ')
        e--;
    string result="";
    for (int i=k;i<=e;i++)
        result=result+s[i];
    return result;
}
void chuanhoa(string s)
{
    int countStartSpaces=0;
    for (int i=0;i<s.size();i++)
        if (s[i]==' ')
            {
                countStartSpaces++;
                cout<<' ';
            }
        else break;   
    for (int i=countStartSpaces;i<s.size();i++)
    {
        if (s[i]!=' ')
            cout<<s[i];
        else 
        {
            cout<<' ';
            while (s[i]==' ')
                {i++;}
            i--;
        }
    }    
}
int main()
{
    int n;
    string a[Nmax];
    int dai[Nmax];
    cin>>n;
    cin.ignore();
    for (int i=0;i<n;i++)
    {
        getline(cin,a[i]);
        dai[i]=a[i].length();
        a[i]=xoadaucuoi(a[i]);
    }
    for (int i=0;i<n;i++)
    {
        chuanhoa(a[i]);
        cout<<endl;
    }
    return 0;
}