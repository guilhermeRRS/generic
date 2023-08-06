#include <vector>

#include "../move/moveGen.cpp"

#include "../problem/data.cpp"
#include "../problem/model.cpp"

using namespace std;

template <typename Tsol, typename Tchange, typename Tm>

class Method
{

public:
    vector<MoveGen<Tsol, Tchange> *> sols;
    Data *data;
    Model<Tm> *model;

    Problem() { NotImplemented(); }

    // the explanation functions
    virtual void printCmd() { NotImplemented(); };
    virtual void explainCmd() { NotImplemented(); };
};