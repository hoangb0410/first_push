#include <iostream>
using namespace std;
const int Nmax =1000;
int scs(int n)
{
    int result=0;
    if (n==0)
        return 1;
    while (n>0)
    {
        result++;
        n=n/10;
    }
    return result;
}
int xh(int a, int x)
{
    if (a<0)
        a=-a;
    bool kt=false;
    int cso=1,cs,temp=a;
    while (a>0)
    {
        int b= a%10;
        a=a/10;
        if (x==b)
        {   kt=true;
            cs=cso;
            break;
        }
        else cso++;
    }
    if (kt==true)
        return scs(temp)-cs;
    else 
        return -1;
}
int main()
{
    int n;
    cin>>n;
    int A[Nmax],cs[Nmax];
    for (int i=0;i<n;i++)
        cin>>A[i]>>cs[i];
    for (int i=0;i<n;i++)
    {
        cout<<xh(A[i],cs[i])<<endl;
    }
    return 0;
}