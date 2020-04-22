#include<conio.h>
#include<iostream>
using namespace std;
int mat[1000][1000],tree[1000],n;
class spanning
{
	public:
	void readgraph()
	{
		cout<<"Enter no of vertices : ";
		cin>>n;
		cout<<"Enter Adjacency Matrix : ";
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				cin>>mat[i][j];
			}
		}
	}
	
	void printgraph()
	{
		cout<<"Adjacency Matrix : ";
		for(int i=1;i<=n;i++)
		{
			cout<<"\n";
			for(int j=1;j<=n;j++)
			{
				cout<<mat[i][j]<<" ";
			}
		}
	}
	
	void prims()
	{
		int total=0,v1,v2;
		for(int i=1;i<=n;i++)
		{
			tree[1]=0;
			tree[1]=1;
			
		}
		cout<<"\n v1 v2 min_dist";
		
		for(int k=2;k<=n;k++)
		{
			int min_dist=3000;
			for(int i=1;i<=n;i++)
			{
				for(int j=1;j<n;j++)
				{
					if(mat[i][j]&&((tree[i]&&!tree[j])||(!tree[i]&&tree[j])))
					{
						if(mat[i][j]<min_dist)
						{
							min_dist=mat[i][j];
							v1=i;
							v2=j;
						}
					}
				}
			}
			cout<<"\n"<<v1<<"-"<<v2<<"="<<min_dist;
			tree[v1]=1;
			tree[v2]=1;
			total=total+min_dist;
		}
		cout<<"\n Cost of Minimum Spanning Tree is : "<<total;
	}
};

int main()
{
	spanning s;
	s.readgraph();
	s.printgraph();
	s.prims();
	getch();
}

				
		
