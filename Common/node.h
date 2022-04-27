#ifndef NODE
#define NODE

template <class MyType> class NodeData
{
private:
    MyType data;
public:
    virtual void accessNode();
    void setData(const MyType &src);
    MyType getData() const;
};

#endif