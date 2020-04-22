#include <iostream>
using namespace std;

int mat[10][10];
int v=6;
void adjacency_matrix(int v)
{
	int i,j;
	for(i=0;i<v;i++)
	{
		for(j=0;j<v;j++)
		{
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
}

void add_edge(int n , int v)
{
	mat[n][v]=1;
	mat[v][n]=1;
}

void bfs(int s)
{
	int qu[10],j,k,v,front,rare,visit[10],visited[10];
	cout <<"Enter initial vertex to traverse from:";
    cin >>s;
    cout <<"Visitied vertices:";
    cout <<v<<" ";
    visited[s]=1;
    k=1;
    while(k<v)
    {
        for(j=1; j<=v; j++)
            if(mat[s][j]!=0 && visited[j]!=1 && visit[j]!=1)
            {
                visit[j]=1;
                qu[rare++]=j;
            }
        s=qu[front++];
        cout<<s <<" ";
        k++;
        visit[s]=0;
        visited[s]=1;
	}
}

int main()
{
	
	add_edge(0, 4);
	add_edge(0, 3);
	add_edge(1, 2);
	add_edge(1, 4);
	add_edge(1, 5);
	add_edge(2, 3);
	add_edge(2, 5);
	add_edge(5, 3);
	add_edge(5, 4);
	
	adjacency_matrix(6);
	bfs(0);
	
	return 0;
}
	
	
	
	
	
	
	



