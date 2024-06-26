#ifndef WorkSpace_hpp
#define WorkSpace_hpp
#include "List.hpp"
#include "Graph.hpp"

namespace reznikova
{
  struct WorkObject
  {
    WorkObject(Graph graph): graph_(graph), isActive_(true) {}
    void resetFlag();
    Graph graph_;
    bool isActive_;
  };

  struct GraphList
  {
    GraphList(): graphList_() {}
    bool isGraphInList(std::string graphName) const;
    void addToList(Graph graph);
    void resetActiveFlags();
    WorkObject * findGraphByName(std::string graphName) const;
    WorkObject * getActiveGraph();
    List< WorkObject * > graphList_;
  };
}

#endif
