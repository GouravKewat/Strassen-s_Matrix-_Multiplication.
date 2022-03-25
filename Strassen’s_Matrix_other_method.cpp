#include<iostream>
using namespace std;
int main()
{
    int x[2][2],y[2][2],z[2][2];
    int p[7];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<"Enter the element:- ";
            cin>>x[i][j];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<"Enter the element:- ";
            cin>>y[i][j];
        }
    }

    p[0]=x[0][0]*(y[0][1]-y[1][1]);
    
    p[1]=(x[0][0]+x[0][1])*y[1][1];
    
    p[2]=(x[1][0]+x[1][1])*y[0][0];
    
    p[3]=x[1][1]*(y[1][0]-y[0][0]);
    
    p[4]=(x[0][0]+x[1][1])*(y[0][0]+y[1][1]);
    
    p[5]=(x[0][1]-x[1][1])*(y[1][0]+y[1][1]);
    
    p[6]=(x[0][0]-x[1][0])*(y[0][0]+y[0][1]);

    
    z[0][0]=p[5]+p[4]+p[3]-p[1];
    
    z[0][1]=p[0]+p[1];
    
    z[1][0]=p[2]+p[3];
    
    z[1][1]=p[0]-p[2]+p[4]-p[6];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<x[i][j]<<" ";
        }
        cout<<endl;
    } 
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<x[i][j]<<" ";
        }
        cout<<endl;
    } 
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<z[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
