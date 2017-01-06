#include <iostream>
#include <list>
#include <queue>

using namespace std;

class Graph
{
	int V;
	list<int> *adj;


public:
	Graph(int V);
	void AddEdge(int v, int w);
	void BFS(int s);
};


Graph::Graph(int v)
{
	this->V = v;
	adj = new list<int>[v];
}


void Graph::AddEdge(int v, int w)
{
	adj[v].push_back(w);
}


void Graph::BFS(int s)
{
	bool *visited = new bool[V];
	bool *isFriend = new bool[V];
	// Initiate arrays
	for (int i = 0; i < V; i++)
	{
		visited[i] = false;
		isFriend[i] = false;
	}

	// Create a queue for BFS
	queue<int> queue;

	// Mark the current node as visited and enqueue it
	visited[s] = true;
	queue.push(s);

	// 'i' will be used to get all adjacent vertices of a vertex
	list<int>::iterator i;

	isFriend[s] = true;
	bool piviotFriendVal = true;

	while (!queue.empty())
	{
		// Dequeue a vertex from queue and print it
		s = queue.front();
		queue.pop();

		// Get all adjacent vertices of the dequeued vertex s
		// If a adjacent has not been visited, then mark it visited
		// and enqueue it
		for (i = adj[s].begin(); i != adj[s].end(); i++)
		{
			if (!visited[*i])
			{
				visited[*i] = true;
				queue.push(*i);
				isFriend[*i] = !piviotFriendVal;
			}
		}
		piviotFriendVal = !piviotFriendVal;
	}

	// Print final list of friends
	for (size_t i = 0; i < V; i++)
	{
		cout << i << " isFriend: " << isFriend[i] << endl;
	}	
}


int main()
{
	Graph g = Graph(9);
	g.AddEdge(0, 1);
	g.AddEdge(1, 2);
	g.AddEdge(1, 3);
	g.AddEdge(3, 1);
	g.AddEdge(3, 2);
	g.AddEdge(2, 4);
	g.AddEdge(4, 5);
	g.AddEdge(5, 6);
	g.AddEdge(6, 7);
	g.AddEdge(7, 8);
	g.BFS(0);

	system("PAUSE");


	return 0;
}