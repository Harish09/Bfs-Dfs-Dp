#include <iostream>
#include<queue>
using namespace std;
int mat[5][5]={1,0,1,0,1,0,1,1,1,0,0,1,1,1,0,0,1,1,1,0,1,0,1,0,1};
struct point 
{
	int x;
	int y;
	int sc;
};

int front=0, back=0;
struct point qa[20];
void push(struct point o)
{
	qa[back]=o;
	back++;
}
struct point pop()
{
	struct point o=qa[front];
	front++;
	return o;
}
int empty()
{
	return (front==back);
}
int vis[5][5];

int rn[4]={-1,0,0,1};
int cn[4]={0,-1,1,0};
int ans=0;
void bfs(int x,int y)
{
	queue<point> q;
	struct point t;
	t.x=x;
	t.y=y;
	t.sc=1;
	vis[x][y]=1;
	
//	q.push(t);

  push(t);	
	while(!empty())
	{
		struct point curr=pop();
		//q.front();
	//	q.pop();
		
		for(int i=0;i<4;i++)
		{
			int tx=curr.x+rn[i];
			int ty=curr.y+cn[i];
			if(tx>=0 && tx<5 && ty>=0 && ty<5 && mat[tx][ty]&& !vis[tx][ty]){
				vis[tx][ty]=1;
			struct point pu;
			pu.x=tx;
			pu.y=ty;
			pu.sc=curr.sc+1;
			if(pu.sc > ans) ans=pu.sc;
		//	q.push(pu);
			push(pu);
			}
		}
		
	}
}

int main() {
	// your code goes here
	bfs(2,2);
	cout<<ans;
	return 0;
}
