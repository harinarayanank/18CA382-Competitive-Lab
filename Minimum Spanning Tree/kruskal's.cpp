#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int mat[10][10],i,j,k,n,m,c,visit,visited[10],l,v,count,count1,vst,p;
 
int main()
{
int v1,v2;
cout<<"enter no of vertices : ";
cin >> n;
cout <<"enter no of edges : ";
cin >>m;
cout <<"Adjacency Matrix : ";
for(k=1;k<=m;k++)
{
cin >>i >>j >>c;
mat[i][j]=c;
mat[j][i]=c;
}
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
if(mat[i][j]==0)
mat[i][j]=31999;
visit=1;
while(visit<n)
{
v=31999;
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
if(mat[i][j]!=31999 && mat[i][j]<v  && mat[i][j]!=-1 )
{
int count =0;
for(p=1;p<=n;p++)
{
if(visited[p]==i || visited[p]==j)
count++;
}
if(count >= 2)
{
for(p=1;p<=n;p++)
if(mat[i][p]!=31999 && p!=j)
v1=p;
for(p=1;p<=n;p++)
if(mat[j][p]!=31999 && p!=i)
v2=p;
 
if(mat[v1][v2]==-1)
continue;
}
l=i;
k=j;
v=mat[i][j];
}
cout <<"edge from " <<l <<"-->"<<k;
mat[l][k]=-1;
mat[k][l]=-1;
visit++;
int count=0;
count1=0;
for(i=1;i<=n;i++)
{
if(visited[i]==l)
count++;
if(visited[i]==k)
count1++;
} 
if(count==0)
visited[++vst]=l;
if(count1==0)
visited[++vst]=k;
}
}
