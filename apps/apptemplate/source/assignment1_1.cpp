//
// File:   assignment1_1.cpp
// Author: Tucker King
// Purpose:
// Create two C++ classes for the adjacency list and
// adjacency matrix representations of a graph.
//
#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

struct vertex {
  typedef pair<int, vertex*> ve;
  vector<ve> adj;
  string name;
  vertex(string s) : name(s) {};
};

class graph_list {
public:
    typedef map<string, vertex *> vmap;
    vmap work;
    void addVertex(const string&);
    void addEdge(const string& from, const string& to, double cost);
    void addNode(ValueType x);
    void deleteEdge(ValueType source, ValueType dest);
    void deleteNode(ValueType node);
    bool adjacent(ValueType x, ValueType y);
    vector<ValueType> neighbors(ValueType x);
    
};



int main() {
  // Put your code here.
  return 0;
}
