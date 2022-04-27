#include "node.h"
#include <iostream>

template <class MyType>
void NodeData<MyType>::accessNode()
{
    std::cout << data << "\n";
}

template <class MyData>
void NodeData<MyData>::setData(const MyData& src)
{
    data = src;
}

template <class MyData>
MyData NodeData<MyData>::getData() const
{
    return data;
}