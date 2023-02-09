#include <iostream>
using namespace std;
const int Nmax=10000;
void sort(int a[], int n)
{
    for (int i=0;i<n-1;i++)
        for (int j=i+1;j<n;j++)
            if (a[j]<a[i])
                swap(a[i],a[j]);
}
int main()
{
    int n;
    int a[Nmax],b[Nmax],num;
    cin>>n;
    for (int i=0;i<n;i++)
        cin>>a[i];
    for (int i=0;i<n;i++)
    {
        int j=-1;
        while (a[i]>0)
        {
            j++;
            b[j]=a[i]%10;
            a[i]=a[i]/10;
        }
        sort(b,j);
        int k=0;
        while (b[k]==0)
            k++;
        for (k;k<=j;k++)
            cout<<b[k];
        cout<<endl;
    }
    return 0;
}