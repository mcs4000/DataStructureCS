#ifndef NODE
#define NODE

#include <iostream>

/**
 * @brief The datatype of all kinds of Nodes.
 *
 * @tparam MyType : The type of the node data.
 */
template <class MyType>
class NodeData
{
private:
    /**
     * @brief the data of the node.
     *
     */
    MyType data;

public:
    /**
     * @brief The virtual function of accessing the node.
     * Override this method if need different ways to access this node.
     */
    virtual void accessNode()
    {
        std::cout << data << "\n";
    }

    /**
     * @brief Set the Data object
     *
     * @param src the source data
     */
    void setData(const MyType &src)
    {
        data = src;
    }

    /**
     * @brief Get the Data object
     *
     * @return MyType
     */
    MyType getData() const
    {
        return data;
    }
};

#endif