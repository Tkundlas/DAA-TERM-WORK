#include<iostream>
using namespace std;

int linear_search(int A[], int n,int key)
{
    int comp =0,flag =0;
    for(int i=0;i<n;i++)
    {
        comp++;
        if(A[i] == key)
            {
                flag =1;
                break;
            }
    }

    if(flag == 1)
    {
        cout<<"Present "<<comp<<endl;
    }
    else
    cout<<"Not Present "<<comp<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int *a = new int[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        int key;
        cin>>key;
        linear_search(a,n,key);
    }
}
