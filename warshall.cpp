#include<iostream>
using namespace std;
#define INF 99999
int main()
{
	int adj_mat[10][10],n,i,j,k;
	cout<<"Enter no of Vertices : ";
	cin>>n;
	cout<<"\n";
	cout<<"Enter Adjacency Matrix : \n\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>adj_mat[i][j];
		}
	}
	
	for(k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
		{
			if(adj_mat[i][k] > 0)
			{
				for(j=0;j<n;j++)
				{
					if(adj_mat[k][j] > 0 && adj_mat[i][j] > (adj_mat[i][k] + adj_mat[k][j]))
					{
						adj_mat[i][j] = adj_mat[i][k] + adj_mat[k][j];
					}
				}
			}
		}
	}
	
	cout<<"\n";
	cout<<"Final Matrix is : \n\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(adj_mat[i][j] == INF)
			{
				cout<<"INF"<<" ";
			}
			else
			{

			cout<<adj_mat[i][j]<<" ";
		}
		}
		cout<<endl;
		
	}
	return 0;
}

