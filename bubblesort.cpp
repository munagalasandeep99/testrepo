#include <iostream> 
using namespace std; 
int main()
{
    int a[100],n,i,j,temp;
    cout<<"enter the total number of elements:";
    cin>>n;
    cout<<"enter the array elements:";
    for(i=0;i<n;i++)
    {
    cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<"\n list sorted in ascending order:"<<endl;
    for(i=0;i<n;i++)
    {
    cout<<a[i]<<" " ;
    }
    return 0;
}
