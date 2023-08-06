#include <vector>

#include "data.cpp"
#include "model.cpp"
#include "solution.cpp"

using namespace std;

template <typename Tsol, typename Tm>

class Problem
{

public:
    vector<Solution<Tsol> *> sols;
    Data *data;
    Model<Tm> *model;

    Problem() { NotImplemented(); }

    // the explanation functions
    virtual void printCmd() { NotImplemented(); };
    virtual void explainCmd() { NotImplemented(); };
};