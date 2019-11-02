#include<iostream>
using namespace std;
int main()
{
    int r,c,i,j;
    cin>>r>>c;
    int a[r][c]={0};
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    for(j=0;j<c;j++)
      {

       if(j%2==0)

       {

        for(i=0;i<r;i++)
        {
            cout<<a[i][j]<<", ";
        }
    }
    else
    {
        for(i=r-1;i>=0;i--)
        {
         cout<<a[i][j]<<", ";
        }
    }

}
cout<<"END";
}
