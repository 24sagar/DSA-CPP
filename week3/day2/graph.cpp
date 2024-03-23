#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;

class Graph
{

public:
    unordered_map<int, list<int>> gra;
    
    void add_egde(int u, int v, bool dir){
        // dir == 0 : undirected 
        // dir == 1 : directerd

        gra[u].push_back(v);

        if (dir == 0)
        {
            gra[v].push_back(u);
        }
    }

    void print(){

        for( auto i : gra){
            cout<<i.first<<" -> ";
            for( auto j : i.second){
                cout<< j <<", ";
            }
            cout<<endl;
        }
    }
    
};

int main()
{
    int n, m;

    cout<<"Enter the number of Nodes: ";
    cin>>n;
    cout<<"Enter the number of Edges: ";
    cin>>m;

    Graph g;

    for (int i = 0; i < m; i++)
    {
        int u,v;
        cin>>u>>v;
        // creation of undirected graph
        g.add_egde(u,v,0);
    }

    g.print();
    return 0;
}
