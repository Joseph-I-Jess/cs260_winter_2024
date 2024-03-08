#pragma once

#include "graph_node.h"

struct GraphNode;

struct Edge {
    int weight;
    GraphNode *source;
    GraphNode *destination;
};